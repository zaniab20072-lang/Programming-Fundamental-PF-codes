#include<iostream>

using namespace std;

int symmetric(int num);

int main()
{
    int num;
    cout<<" Enter a number : ";
    cin>>num;
     
    symmetric(num);
    return 0;

}
int symmetric(int num)
{
    int sum=0, rem=num;
    while( rem >0 )
    {
        sum = sum + (rem % 10);
        rem = rem / 10;
    }
    if( sum % 2 == 0)
    {
        cout<<" Evenish ";    
    }
    else
    {
        cout<<" Oddish ";
    }
}
