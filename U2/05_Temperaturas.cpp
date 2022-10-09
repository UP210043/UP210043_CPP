/*Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double temp, may=0, men=100000, prom=0;
    for(int i=1;i<=6;i++)
    {
        cout<<"ingresa tu temperatura";
        cin>>temp;
        if(temp>may)
        {
            may=temp;
        }
        
        else if(temp<men)
        {
            men=temp;
        }
        prom=prom+temp;

    }
    prom=prom/6;
    cout<< "El promedio de las temperaturas es: "<<prom<<"\n La temperatura mas alta fue: "<<may<<"\n La temperatura más baja fue: "<<men;
    return 0;
}
