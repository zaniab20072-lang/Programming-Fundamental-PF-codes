#include<iostream>
using namespace std;

main(){

  cout<<" Enter the name of person : ";
  string name;
  cin>>name;
  cout<<" Enter the target weight loss in kilograms : ";
  float kilo;
  cin>>kilo;
  float days; 
  days = kilo * 15 ;
  cout<<name<<" will need "<<days<<" to loss "<<kilo<<" kg weight by following doctor suggestion";


}