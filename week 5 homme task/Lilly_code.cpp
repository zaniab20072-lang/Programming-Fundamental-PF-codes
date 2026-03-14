#include<iostream>
using namespace std;

main()
{
    int age, price, toyPrice;
    cout<<" Enter Lilly age : ";
    cin>>age;
    cout<<" price of washing machine : ";
    cin>>price;
    cout<<" prce of each toy : ";
    cin>>toyPrice;

    int toys =0, money =0, gift =10;

    for( int i =1; i <= age; i++ )
    {
        if( age % 2 == 0) // even birthday
        {
           money = money + gift - 1;     // brother took 1
           gift = gift + 10;
        }
        else
        {
            toys = toys + 1;      // odd birthday
        }
    }
    money = money + ( toys * toyPrice ) ;

    if(money >= price)
    {
        cout << "Yes! " <<endl << money - price <<" remaining money ";
    }
    else 
    {
        cout << "No! " <<endl << price - money <<" insufficient amount ";
    }
}