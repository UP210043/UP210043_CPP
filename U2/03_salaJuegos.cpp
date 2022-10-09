/*Escribir un programa para una empresa que tiene salas de juegos para todas las edades yquiere calcular de forma 
automática el precio que debe cobrar a sus clientes por entrar. Elprograma debe preguntar al usuario la edad 
del cliente y mostrar el precio de la entrada. Si el cliente es menor de 4 años puede entrar gratis, si tiene 
entre 4 y 18 años debe pagar $5ysi es mayor de 18 años, $10.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int edad;
    cout<<"Ingresa tu edad";
    cin>>edad;
    if(edad<4)
    {
        cout<<"Entras gratis";
    }
    else if(edad>=4 && edad<=18)
    {
        cout<<"pagas $5";
    }
    else
    {
        cout<<"Pagas $10";
    }
    return 0;
}
