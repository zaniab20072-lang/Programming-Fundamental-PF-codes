#include<iostream>
using namespace std;

main()
{
    int bill;
    cout<<" Enter your bill ";
    cin>>bill;

    if( bill <= 5000 ){
        int discount, total;
        discount = bill * 0.05 ;
        total = bill - discount ;
        cout<<" Discounted bill is "<<total;
    }
    if( bill > 5000 ){
        int dis, total;
        dis = bill * 0.1 ;
        total = bill - dis ;
        cout<<" Discounted bill is "<<total;
    }
}