/*En una determinada empresa, sus empleados son evaluados al final de cada año. Los puntos que pueden obtener 
en la evaluación comienzan en 0.0 y pueden ir aumentando, traduciéndose en mejores beneficios. Los puntos que 
pueden conseguir los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios entre las cifras 
mencionadas. Acontinuación se muestra una tabla con los niveles correspondientes a cada puntuación.
La cantidad de dinero conseguida en cada nivel es de $2,400 multiplicada por la puntuación del nivel. 
Inaceptable 0.0
Aceptable 0.4
Meritorio 0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, así como la 
cantidad de dinero que recibirá el usuario.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double punt,din;
    string nivel;
    cout<<"Ingresa tu puntuación";
    cin>>punt;
    if (punt==0||punt==0.4||punt>=0.6)
    {
       if(punt==0)
       {
        nivel="Inaceptable";
       }
       else if (punt==0.4)
       {
        nivel="Aceptable";
       }
       else if (punt>=0.6)  
       {
        nivel="Meritorio";
       }
       din=punt*2400;
       cout<<"tu nivel es: "<<nivel<<" recibirás: $"<<din;
    }
    else
    {
        cout<<"Puntuación inválida";
    }

    return 0;
}
