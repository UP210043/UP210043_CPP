#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=10, n=5;
    while (i >=1) {
        int mult=n*i;
        cout<< n<<"*"<<i<<"="<<mult<<"\n";
        i--;
    }
    return 0;
}