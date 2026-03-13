#include<iostream>
using namespace std;

main()
{
    int i = 1;
    int sum = 0;
    while( i <= 5 )
    {
        sum = sum + i;
        i++;
    }
    cout<<" The Sum is : "<<sum;
}