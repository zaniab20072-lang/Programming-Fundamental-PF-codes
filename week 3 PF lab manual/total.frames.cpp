#include<iostream>
using namespace std;

main(){
   
  cout<<" Enter minutes : ";
  int mins;
  cin>>mins;
  cout<<" Enter frame per second : ";
  int fps;
  cin>>fps;
  int frames; 
  frames = ( mins * 60 * fps );
  cout<<" Total frames =  "<<frames;

}