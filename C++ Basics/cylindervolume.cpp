#include <iostream>
using namespace std;

int main()
{
    int radius, height;
    float volume;

    cout<<"Enter radius, height: ";
    cin>>radius>>height;

    volume = (float) 3.14 * radius*radius * height;

    cout<<"Volume of the Cylinder is "<<volume;

    return 0;
}