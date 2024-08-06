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

    return 0;
}