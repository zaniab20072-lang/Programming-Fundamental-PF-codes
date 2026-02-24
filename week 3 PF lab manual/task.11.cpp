#include<iostream>
using namespace std;

main(){
   
  cout<<" Enter the current world population : ";
  int popul;
  cin>>popul;
  cout<<" Enter the monthly birth rate (no of births per month) : ";
  int n;
  cin>>n;
  cout<<" ";
  int result;
  result = ( (n*12*30) + popul );
  cout<<" Population in three decades will be : "<<result;

}