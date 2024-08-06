#include <iostream>
using namespace std;

int main()
{
    int base, height;

    cout<<"Enter base ";
    cin>>base;

    cout<<"Enter height ";
    cin>>height;

    double area = (double) (base*height)/2; //BRO DO NOT FORGET TO CONVERT TO DOUBLE

    cout<<"Area of the triangle is "<<area;

    return 0;
}