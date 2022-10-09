#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{  
    int n, i=1;
    cout<<"Dame un numero ";
    cin>>n;
    do
    {
    int mult= i*n;
    cout<<n<<"*"<<i<<"="<<mult<<"\n";
    i++;
    } while (i<=10);
    return 0;
}


