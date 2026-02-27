#include<iostream>
using namespace std;
 
main(){

  cout<<" Enter a 4 digit number : ";
  int number;
  cin>>number;
  int digit1, digit2, digit3, digit4;
  int sum; 
  digit1 = number % 10;          
  number = number / 10;
  digit2 = number % 10;        
  number = number / 10;
  digit3 = number % 10;          
  number = number / 10;
  digit4 = number % 10;         
  sum = digit1 + digit2 + digit3 + digit4;
  cout<<" Sum of digits = "<<sum;
}