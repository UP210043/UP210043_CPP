#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
      int i,n,mult;
      cout<<"Dame un número";
      cin>>n;
      for(i=10;i>=1;i--)
      {
        mult=n*i;
        cout<<n<<"*"<<i<<"="<<mult<<"\n";
      }
    return 0;
}
