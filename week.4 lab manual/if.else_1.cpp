#include<iostream>
using namespace std;

main()
{
    int cost;
    cout<<" Enter the cost :";
    cin>>cost;

    if( cost < 1500 ){
        cout<<" Buy the dress ";
    }
    if( cost >= 1500 ){
        cout<<" do not buy the dress ";
    }
}
