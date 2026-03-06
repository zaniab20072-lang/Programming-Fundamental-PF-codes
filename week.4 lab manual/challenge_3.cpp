#include<iostream>
using namespace std;

main()
{
    string name1, name2;
    cout<<" Enter the name : ";
    cin>>name1;
    cout<<" Enter the second name : ";
    cin>>name2;

    if( name1 == name2 ){
        cout<<" Both names are same ";
    }
    else{
        cout<<" Both names are different ";
    }
}