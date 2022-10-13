/*Objetivo:Sumatoria
            Debug
 n=10 1+2+3+4+5+6+7+8+9+10*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=10, i=1, sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
    return 0;
}
