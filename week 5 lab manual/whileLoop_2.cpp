#include<iostream>
 using namespace std;

 main()
 {
    int value;
    cout<<" Enter a positive number : ";
    cin>>value;
    while( value <= 0){
        cout<<" Error: " <<value <<" is not a positive integer "<<endl;
        cout<<" Please enter a positive integer "<<endl;
        cin>>value;
    }
    cout<<" Program Ends ";
 }