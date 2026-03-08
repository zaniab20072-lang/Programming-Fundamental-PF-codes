#include<iostream>
using namespace std;

main()
{
    string country;
    int ticketPrice, discount, finalPrice;
    cout<<" Enter Country name : ";
    cin>>country;
    cout<<" Enter Ticket price in dollars : ";
    cin>>ticketPrice;

    if( country == "Ireland" ){
        discount = ticketPrice * 0.1 ;
        finalPrice = ticketPrice - discount ;
        cout<<" Discounted Price : "<<finalPrice;
    }
    if( country != "Ireland" ){
        discount = ticketPrice * 0.05 ;
        finalPrice = ticketPrice - discount ;
        cout<<" Discounted Price : "<<finalPrice;  
    }
    
}