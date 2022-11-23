#include <iostream>
#include <cmath>
using namespace std;

// x^2 + 8x + 15
double fnecu1(double x)
{ 
    return (pow(x, 2) - 8 * x + 15);
}
int main()
{
    double x1 = -10;
    double x2 = 4.5;
    double xn, r;

    double es = .0001;         // Error estandar
    double er = abs(x2 - x1); // Error relativo

    int i = 1;

    while (er > es)
    {

        xn = (x1 + x2) / 2;

        if (fnecu1(x1) * fnecu1(xn) < 0)
        {

            x2 = xn;
        }
        else
        {
            x1 = xn;
        }

        er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i= " << i << "  raiz=  " << xn << endl;
    return 0;
}