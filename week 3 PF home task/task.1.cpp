#include<iostream>
using namespace std;

main(){

  cout<<" Enter the number of sides of polygon is : ";
  int side;
  cin>>side;
  int sum;
  sum = (side -2) * 180 ;
  cout<<" The total sum of internal amgles of a : "<<side<<"-sided polygon is : "<<sum<<" degrees";


}