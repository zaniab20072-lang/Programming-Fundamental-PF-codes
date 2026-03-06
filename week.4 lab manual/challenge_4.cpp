#include<iostream> 
using namespace std;

main()
{
    string my_password, user_enter;
    my_password = "pass@2429";
    cout<<" enter the pasword : ";
    cin>>user_enter;
    
    if( my_password == user_enter ){
        cout<<" Wow you cracked it ";
    }
    else{
        cout<<" Try again , it is not that simple ";
    }
}