#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=1;
    for(int i; i<=10;i++)
    {
        if (i==6)
        {
            continue;
        }
        else
        {
            cout<<i<<endl;
        }
        cout<<"Siguiente numero"<<endl;
    }
    return 0;
}
