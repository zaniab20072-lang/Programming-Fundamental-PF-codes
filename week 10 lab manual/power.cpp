#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int base, exponent;
    cout<<" Enter base number : ";
    cin>>base;
    cout<<" Enter exponent  : ";
    cin>>exponent;
    cout<<base <<" raised to the power "<<exponent <<" is : "<<pow(base, exponent);
    return 0; 
}