#include<iostream>
using namespace std;

main()
{
    int temp_1, temp_2, difference=0;

    cout<<" Enter the temperature of 1st city in degrees : ";
    cin>>temp_1;
    cout<<" Enter the temperature of 2nd city in degrees : ";
    cin>>temp_2;
 
    difference = temp_1 - temp_2;

    if( difference > 10 ){
        cout<<" Difference is too big. "<<endl;
    }
    cout<<" Program ends. ";
}