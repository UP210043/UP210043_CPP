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