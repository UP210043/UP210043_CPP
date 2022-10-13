/*Objetivo: Identificar la etapa de la vida en la que se uncuentra una persona
basada en su edad
1-30 Primera edad
31-60 Segunda edad
61-90 Tercera edad
+90 Horas extra*/
#include <iostream>
using namespace std;
int main()
{
    int ed;
    cout << "Ingresa tu edad";
    cin >> ed;
    if (ed > 150 && ed <= 0)
    {
        cout << "Edad fuera de rango";
    }
    else
    {
        if (ed >= 1 && ed <= 30)
        {
            cout << "Primera edad";
            }
        else if (ed > 30 && ed <= 60)
        {
            cout << "segunda edad";
        }
        else if (ed > 60 && ed <= 90)
        {
            cout << "Tercera edad";
        }
        else
        {
            cout << "horas extra";
        }
    }
    return 0;
}