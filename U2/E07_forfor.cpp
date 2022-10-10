/* Objetivo: for anidados
Las tablas del 1 al 10*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mult;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            mult=i*j;
            cout<<i<<"*"<<j<<"="<<mult<<"\n"; 
        }
        cout<<"\n";
    }
    return 0;
}
