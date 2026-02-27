#include<iostream>
using namespace std;

main(){

  cout<<" Enter the size of the fertilizer bag in pounds : ";
  float size;
  cin>>size;
  cout<<" Enter the cost of bag : $";
  float cost;
  cin>>cost;
  cout<<" Enter the area in square feet that can be covered by the bag : ";
  float area;
  cin>>area;
  int perPound; 
  perPound = cost/size ;
  float perSquare;
  perSquare = cost/area ;
  cout<<" Cost of fertilizer per pound :$"<<perPound<<endl;
  cout<<" Cost of fertilizing per square foot :$"<<perSquare;



}