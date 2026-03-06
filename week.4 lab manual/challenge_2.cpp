#include<iostream>
using namespace std;

main()
{
    int num1, num2;
    cout<<" Enter the number : ";
    cin>>num1;
    cout<<" Enter the second number : ";
    cin>>num2;

    if( num1 < num2 ){
        cout<<" Number "<<num2<<" is greater than number "<<num1;
    }
    else{
        cout<<" Number "<<num1<<" is greater than number "<<num2;
    }
}