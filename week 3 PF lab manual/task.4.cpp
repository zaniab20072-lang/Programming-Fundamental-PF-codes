#include<iostream>
using namespace std;

main(){

    cout<<" Enter the Charge (Q) in columbs : ";
    float charge;
    cin>>charge;
    cout<<" Enter the Times (T) in seconds : ";
    float time;
    cin>>time;
    float current;
    current = charge / time  ;
    cout<<" The Current (I) is = "<<current<<" Amperes "; 

}