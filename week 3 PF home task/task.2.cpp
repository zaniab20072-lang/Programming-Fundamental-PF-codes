#include<iostream>
using namespace std;

main(){

 cout<<" Number of Minutes : ";
 int min;
 cin>>min;
 cout<<" Frames per second : ";
 int fps;
 cin>>fps;
 int total;
 total = ( min * 60 ) * fps;
 cout<<" Total number of Frames : "<<total;

}