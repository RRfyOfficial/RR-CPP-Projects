#include <iostream>
using namespace std;

int main()
{
    //in c++ syntax, all variable names are capitalized :)

    int RollNo; //there was some garbage (unknown) value stored initially
    cout<<RollNo<<endl;

    RollNo = 10; //this value is initialized
    cout<<RollNo<<endl;

    int Num = 5; // you declare on the same line too
    cout<<Num<<endl;

    char Group = 'A';
    cout<<Group<<endl;

    float Price = 12.75f; //you need to write "f" for float values, or it will think it's double
    cout<<Price<<endl;


    int a, b;

    a = 13;
    b = 5;

    int c = a/b;
    cout<<c<<endl;

    double d = a/b;
    cout<<d<<endl;

    d = (double) a/b; //type casting is necessary in C++
    cout<<d<<endl;


    return 0;
}