#include<iostream> 
using namespace std;

main()
{
    int red_rose, white_rose, tulip; 
    float orignalPrice, discount, total;
    cout<<" Number of Red roses : ";
    cin>>red_rose;
    cout<<" Number of White roses : ";
    cin>>white_rose;
    cout<<" Number of tulips : ";
    cin>>tulip;

    orignalPrice = ( red_rose * 2.00 ) + ( white_rose * 4.10 ) + ( tulip * 2.50 );
    cout<<" orignal price : $"<<orignalPrice<<endl;

    if( orignalPrice > 200 ){
        discount = orignalPrice * 0.2 ;
        total = orignalPrice - discount ;
        cout<<" Price after discount : $"<<total;
    }
}