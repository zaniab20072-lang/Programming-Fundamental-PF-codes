#include<iostream>
using namespace std;

int factorial(int num);

main()
{
    int num;
    cout<<" Enter a number : ";
    cin>>num;
    int res = factorial(num);
    if ( res == num )
    {
        cout<<" Strong Number ";
    }
    else
    {
        cout<<" Not A Strong Number ";
    }
}
int factorial(int num)
{
    int sum=0;
    while(num > 0)
    {
        int digit = num % 10;
        int fact = 1;
        for( int i= 1; i<= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    return sum;
}