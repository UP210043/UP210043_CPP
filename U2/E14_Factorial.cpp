#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5, i=1, sum=0, fact=1;
    while (i<=n)
    {
        fact=i*fact;
        sum=sum+fact;
        i++;
    }
    cout<<sum;
    return 0;
}