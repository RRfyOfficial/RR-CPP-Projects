#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, root1, root2;
    cout<<"Enter your a, b, c values: ";
    cin>>a>>b>>c;

    root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b - sqrt(b*b-4*a*c))/(2*a);

    cout<<"The Roots are "<<root1<< " & "<<root2;

    return 0;
}

