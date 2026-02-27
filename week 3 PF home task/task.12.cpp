#include<iostream>
using namespace std;

main(){

  cout<<" Number of square metres you can paint : ";
  int num;
  cin>>num;
  cout<<" Width of single wall (in metres) : ";
  int width;
  cin>>width;
  cout<<" Height of single wall (in metres) : ";
  int height;
  cin>>height;
  int wallsPaint;
  wallsPaint = num / ( height * width ) ;
  cout<<" Number of walls you can paint : "<<wallsPaint;

}