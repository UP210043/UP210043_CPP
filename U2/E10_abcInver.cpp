#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char letra=90;
    for(int i=0;i<26; i++)
    {
        cout<<letra<<"\t";
        letra=letra-1;
    }
    return 0;
}
