#include<iostream>
#include<cmath>

using namespace std;

void poolState(float volume, float pipe1, float pipe2, float hours);

int main()
{
    float volume, pipe1, pipe2, hours;

    cout<<" Enter the Volume of the pool in litres : ";
    cin>>volume;
    cout<<" Enter the flow rate of first pipe per hour : ";
    cin>>pipe1;
    cout<<" Enter the flow rate of second pipe per hour : ";
    cin>>pipe2;
    cout<<" Enter hours that the worker is  absent : ";
    cin>>hours;
    poolState(volume, pipe1, pipe2, hours);
    return 0;
}
void poolState(float volume, float pipe1, float pipe2, float hours)
{
    float Total_water = ( pipe1 + pipe2 ) * hours;
    if( Total_water <= volume)
    {
        int pool = (Total_water / volume) * 100;
        int P1 = (pipe1 * hours / Total_water ) * 100;
        int P2 = (pipe2 * hours / Total_water ) * 100;
        cout<<" The pool is "<<pool <<"% full. Pipe 1 : "<<P1 <<"%. Pipe 2 : "<<P2<<"%";
    }
    else
    {
        float overflow = Total_water - volume;
        cout<<" For "<<hours <<" hours the over flow is : "<<overflow <<" litres . ";
    }
}
