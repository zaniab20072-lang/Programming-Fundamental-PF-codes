#include<iostream>
using namespace std;

main(){
   
  cout<<" Enter Age : ";
  int age;
  cin>>age;
  cout<<" Enter Moves : ";
  int moves;
  cin>>moves;
  float avg; 
  avg = ( age / (moves+1) );
  cout<<" Average years =  "<<avg;

}