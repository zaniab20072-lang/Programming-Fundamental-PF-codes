#include<iostream>
using namespace std;

main(){

 cout<<" Enter Initial Velocity (m/s) : ";
 int v;
 cin>>v;
 cout<<" Enter Acceleretion (m/s^2) : ";
 int a;
 cin>>a;
 cout<<" Enter Time (s) : ";
 int t;
 cin>>t;
 int final;
 final = ( a * t ) + v ;
 cout<<" Final Velocity : "<<final;


}