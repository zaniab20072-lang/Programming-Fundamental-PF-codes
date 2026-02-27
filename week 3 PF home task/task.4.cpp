#include<iostream>
using namespace std;

main(){

  cout<<" Enter Imposters count : ";
  float imp;
  cin>>imp;
  cout<<" Enter players count : ";
  float p;
  cin>>p;
  float chance; 
  chance = ( 100 * (imp/p) );
  cout<<" Chance of being an Imposter  =  "<<chance<<"%";


}