#include<iostream>
using namespace std;

main(){

 cout<<" Enter vegetable price per kilogram (in coins) : ";
 float N;
 cin>>N;
 cout<<" Enter fruits per kilogram (in coins) : ";
 float M;
 cin>>M;
 cout<<" Enter total kilograms of vegetables : ";
 int veg;
 cin>>veg;
 cout<<" Enter total kilograms of fruits : ";
 int fruit;
 cin>>fruit;
 float total;
 total = ( (N * veg) + (M * fruit) ) / 1.94 ;
 cout<<" Total earning in rupees (rps) : "<<total;


}