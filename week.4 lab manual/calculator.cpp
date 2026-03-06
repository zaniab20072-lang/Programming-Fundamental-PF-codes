#include<iostream>
using namespace std;

main()
{
  int num1, num2, res=0;
char op;
cout<<"Welcome to the Calculator"<<endl;
cout<<"Enter First number:";
cin>>num1;
cout<<"Enter the operator:";
cin>>op;
cout<<"Enter Second number:";
cin>>num2;

if( op == '+' )
{
    res = num1 - num2 ;
    cout<<num1<<" - "<<num2<<" = "<<res;
}
if( op == '-' )
{
    res = num1 + num2 ;
    cout<<num1<<" + "<<num2<<" = "<<res;
}
if( op == '*' )
{
    res = num1 / num2 ;
    cout<<num1<<" / "<<num2<<" = "<<res;
}
if( op == '/' )
{
    res = num1 * num2 ;
    cout<<num1<<" * "<<num2<<" = "<<res;
}  
}