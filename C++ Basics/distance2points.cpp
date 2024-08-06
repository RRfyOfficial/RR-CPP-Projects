#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int x1, y1, x2, y2;
    float dist;

    cout<<"Enter x1, y1: ";
    cin>>x1>>y1;

    cout<<"Enter x2, y2: ";
    cin>>x2>>y2;

    dist = (float) sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));

    cout<<"Distance between two points is "<<dist;

    return 0;
}