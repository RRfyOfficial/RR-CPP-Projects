#include <iostream>
using namespace std;

int main()
{
    int x=11, y=5, z;
    
    //11 = 00001011
    //5 =  00000101

    z = x&y; //00000001 = 1
    cout<<z<<endl;

    z = x|y; //00001111 = 15
    cout<<z<<endl;

    z = x^y; //00001110 = 14
    cout<<z<<endl;


    char a = 5, b;
    
    b = a<<1; //multiply by 2^1
    cout<<(int)b<<endl;

    

    a = 20;
    b = a>>1; //divide by 2^1
    cout<<(int)b<<endl;

    return 0;
}