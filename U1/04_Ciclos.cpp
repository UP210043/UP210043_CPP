/*Objetivo: Determinar si un numero es par o impar y contar la cantidad de cada uno*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, res,par=0, impar=0;
    cout<<"Par o impar" <<"\n";
    for(int i=1; i<=10;i++)
    {
    cout<<"Dame un numero ";
    cin>>n;
    res=n%2;
    if(res==0)
    {
    par++;
    }
    else
    {
        impar++;
    }
    }

    cout<<"pares: "<<par<<"\n Impares: "<<impar;
    cout<<"\n El total es: "<<impar+par;
    return 0;
}
