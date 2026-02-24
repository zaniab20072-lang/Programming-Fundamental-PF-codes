#include<iostream>
using namespace std;

main(){
   
  cout<<" Enter the number of Wins : ";
  int wins;
  cin>>wins;
  cout<<" Enter the number of Draws : ";
  int draws;
  cin>>draws;
  cout<<" Enter the number of Losses : ";
  int losses;
  cin>>losses;
  int result;
  result = ((wins*3) + (draws*1) + (losses*0));
  cout<<" Pakistan has obtained "<<result<<" points in Asia tournament ";

}