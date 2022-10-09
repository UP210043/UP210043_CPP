#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, mult;
    cout<<"Dame un numero"<<"\n";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        mult=n*i;
        cout<<n<<"*"<<i<<"="<<mult<<"\n";
    }
    return 0;
}
