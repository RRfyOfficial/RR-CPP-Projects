#include <iostream>
using namespace std;

int main()
{
    float radius, area;

    cout<<"Enter Radius: ";
    cin>>radius;

    area = 3.1415926f * radius * radius;

    cout<<"Area is "<<area<<endl;

    return 0;
}