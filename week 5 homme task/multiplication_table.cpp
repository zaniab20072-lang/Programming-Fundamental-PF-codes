#include<iostream>
using namespace std;

main()
{
   int table, res=0;
   cout<<" Enter table number : ";
   cin>>table;

   for( int i = 1; i <= 10; i++ )
   {
     res = table * i ;
     cout<<table <<" * " <<i <<" = " <<res <<endl;
   }
}