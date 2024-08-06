#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter n value: ";
    cin>>n;

    double sum = (double) (n*(n+1))/2;

    cout<<"The sum of the first \"n\" natural numbers is "<<sum;

    return 0;
}