package com.kenyatali.myapplication;

import androidx.annotation.NonNull;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.app.AppCompatActivity;

import android.app.ProgressDialog;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Patterns;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import com.google.android.gms.tasks.OnFailureListener;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

import java.util.HashMap;

public class registro extends AppCompatActivity {
    EditText et_nombre,et_correo,et_contraseña,et_confirmar;
    Button regUsuario;
    TextView txt_tengoCuenta;

    FirebaseAuth firebaseAuth;
    ProgressDialog progressDialog;

    String nombre="",correo="",contrasena="",confirmar="";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_registro);

        ActionBar actionBar=getSupportActionBar();
        actionBar.setTitle("Registrar");
        actionBar.setDisplayHomeAsUpEnabled(true);
        actionBar.setDisplayShowHomeEnabled(true);

        et_nombre=findViewById(R.id.et_nombre);
        et_correo=findViewById(R.id.et_correo);
        et_contraseña=findViewById(R.id.et_contraseña);
        et_confirmar=findViewById(R.id.et_confirmar);

        regUsuario=findViewById(R.id.regUsuario);

        txt_tengoCuenta=findViewById(R.id.txt_tengoCuenta);

        firebaseAuth=FirebaseAuth.getInstance();

        progressDialog=new ProgressDialog(registro.this);
        progressDialog.setTitle("Espere...");
        progressDialog.setCanceledOnTouchOutside(false);

        regUsuario.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                validation();
            }
        });
        txt_tengoCuenta.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(registro.this, login.class));
            }
        });
    }

    private void validation(){
        nombre=et_nombre.getText().toString();
        correo=et_correo.getText().toString();
        contrasena=et_contraseña.getText().toString();
        confirmar=et_confirmar.getText().toString();

        if (TextUtils.isEmpty(nombre))
        {
            Toast.makeText(this, "Ingrese nombre", Toast.LENGTH_SHORT).show();
        }
        else if (!Patterns.EMAIL_ADDRESS.matcher(correo).matches())
        {
            Toast.makeText(this, "Correo inválido", Toast.LENGTH_SHORT).show();
        }
        else if (TextUtils.isEmpty(contrasena))
        {
            Toast.makeText(this, "Ingrese una contraseña", Toast.LENGTH_SHORT).show();
        }
        else if(TextUtils.isEmpty(confirmar))
        {
            Toast.makeText(this, "Confirme su contraseña", Toast.LENGTH_SHORT).show();
        }
        else if (!contrasena.contentEquals(confirmar))
        {
            Toast.makeText(this, "Las contraseñas no coinciden", Toast.LENGTH_SHORT).show();
        }
        else
        {
            crearCuenta();
        }
        }

    private void crearCuenta() {
        progressDialog.setMessage("Creando...");
        progressDialog.show();

        firebaseAuth.createUserWithEmailAndPassword(correo, contrasena).addOnSuccessListener(new OnSuccessListener<AuthResult>() {
            @Override
            public void onSuccess(AuthResult authResult) {
            saving();
            }
        }).addOnFailureListener(new OnFailureListener() {
            @Override
            public void onFailure(@NonNull Exception e) {
                progressDialog.dismiss();
                Toast.makeText(registro.this,"" +e.getMessage(), Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void saving() {
        progressDialog.setMessage("Guardando...");
        progressDialog.dismiss();

        //Obtener la identificación del usuario actual
        String uid=firebaseAuth.getUid();

        HashMap<String, String> datos=new HashMap<>();
        datos.put("uid",uid );
        datos.put("Correo", correo);
        datos.put("Nombres",nombre);
        datos.put("Contraseña", contrasena);

        DatabaseReference databaseReference= FirebaseDatabase.getInstance().getReference("Usuarios");
        databaseReference.child(uid).setValue(datos)
                .addOnSuccessListener(new OnSuccessListener<Void>() {
                    @Override
                    public void onSuccess(Void unused) {
                    progressDialog.dismiss();
                        Toast.makeText(registro.this, "Cuenta creada exitosamente", Toast.LENGTH_SHORT).show();
                        startActivity(new Intent(registro.this,menu_principal.class));
                        finish();
                    }
                }).addOnFailureListener(new OnFailureListener() {
                    @Override
                    public void onFailure(@NonNull Exception e) {
                        progressDialog.dismiss();
                        Toast.makeText(registro.this, ""+e.getMessage(), Toast.LENGTH_SHORT).show();
                    }

                });


    }

    @Override
    public boolean onSupportNavigateUp() {
        onBackPressed();
        return super.onSupportNavigateUp();
    }
}