#include<iostream>
using namespace std;

main()
{
    char going;
    cout<<" Are your friends going ? (press y for yes and n for no) ";
    cin>>going;

    if ( going == 'y'){
        cout<<" You are also going ! ";
    }
    else{
        cout<<" you are not going ";
    }
    
}