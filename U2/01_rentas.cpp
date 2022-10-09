/*los tramos impositivos para la declaración de la renta en un determinado país son los siguientes
renta                       impuesto
menos de 10,0000            5
entre 10,000 y 20,000       15
entre 20.000 y 35000        20
entre 35000 y 60,000        30
mas de 60,000               45

Programa que pregunte al usuario su renta anual y muestre por pantalla el impuesto que le corresponde */
#include <iostream>
using namespace :: std;
int main()
{
    int rent;
    float porc, imp;
    cout<<"Ingrese su renta anual";
    cin>> rent;
    if (rent<10000)
    {
        porc=0.05;
    }
    else if (rent>=10000 && rent<20000)
    {
        porc=0.15;
    }
    else if (rent>=20000 && rent<35000)
    {
        porc=0.20;
    }
    else if (rent>=35000 && rent<60000)
    {
        porc=0.30;
    }
    else
    {
        porc=0.45;
    }
    imp=rent*porc;
    cout<< "Te corresponde pagar de impuestos: "<<imp;
    return 0;

}