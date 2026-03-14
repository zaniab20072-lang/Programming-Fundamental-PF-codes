#include<iostream>
using namespace std;

main()
{
    int num, res =0, sum =0;
    cout<<" Enter a number : ";
    cin>>num;

   while( num > 0 )
   {
      
      res = num % 10;
      sum = sum + res;
      num = num / 10;

   }
   cout<<" The Sum : "<<sum;
}