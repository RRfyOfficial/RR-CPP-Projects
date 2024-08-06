#include <iostream>
using namespace std;

int main()
{
    int P, R, T;

    cout<<"Enter principal amount, rate, and time: ";
    cin>>P>>R>>T;

    float SimpleInterest;
    SimpleInterest = (float) (P * R * T)/100;

    cout<<"Interest is "<<(int) SimpleInterest;

    return 0;
}