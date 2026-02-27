#include<iostream>
using namespace std;

main(){

  cout<<" Enter the person's age : ";
  int age;
  cin>>age;
  cout<<" Enter the number of times they've moved : ";
  int num;
  cin>>num;
  int avrg;
  avrg = age / ( num + 1 ) ;
  cout<<" Average number of years they have lived in the same house : "<<avrg;

}