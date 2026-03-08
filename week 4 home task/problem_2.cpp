#include<iostream>
using namespace std;

main()
{
    int speed;
    cout<<" Enter your car speed km/h : ";
    cin>>speed;

    if( speed <= 100 ){
        cout<<" Perfect! You are doing good. ";
    }
    
    if( speed > 100 ){
        cout<<" Halt... YOU WILL BE CHALLANED! ";
    }
}