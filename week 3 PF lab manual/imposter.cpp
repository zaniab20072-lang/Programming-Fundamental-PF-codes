#include<iostream>
using namespace std;

main(){
   
  cout<<" Enter Imposters : ";
  float imp;
  cin>>imp;
  cout<<" Enter players : ";
  float p;
  cin>>p;
  float chance; 
  chance = ( 100 * (imp/p) );
  cout<<" Chance =  "<<chance<<"%";

}