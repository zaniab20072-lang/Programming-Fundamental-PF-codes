#include<iostream>
using namespace std;

main()
{
    int money, year;   
    cout<<" Enter money : ";       
    cin >> money;
    cout<<" Enter year : ";
    cin >> year;

    int age = 18;     
    for( int y = 1800; y <= year; y++ )
    {
        if(y % 2 == 0)           // even year
        {
            money -=  12000 ;
        }
        else                      // odd year
        {
            money -=  12000 + ( 50 * age )  ;
        }
        age++;                     // age increase each year
    }

    if(money >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left.";
    }
    else
    {
        cout << "He will need " << -money << " dollars to survive.";
    }
}