#include<iostream>
using namespace std;

main(){

  cout<<" Enter the size of megabytes (MB) : ";
  int mb;
  cin>> mb;
  float bit;
  bit = mb * 1024 * 1024 *8 ;
  cout<<mb<<" MB is equivalent to "<<bit<<" bits";
  

} 