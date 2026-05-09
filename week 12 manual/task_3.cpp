#include<iostream>
using namespace std;

main()
{
    int y = 20;
    int &ref = y;
    
    cout<<" Orignal value of y : " <<y <<endl;
    ref = 30;
    cout<<" Modified value of y : " <<y <<endl;
}