#include<iostream>
using namespace std;

main()
{
    int  result = 0;

    cout<<" Table of : 24 "<<endl;
    for( int i = 1; i <= 10; i = i+1 ){
        result = 24 * i ;
        cout<<" 24 * " << i <<" = " << result <<endl;
    }

    cout<<endl;
    cout<<" Table of : 50 "<<endl;
    for( int i = 1; i <= 10; i = i+1 ){
        result = 50 * i ;
        cout<<" 50 * " << i <<" = " << result <<endl;
    } 

    cout<<endl;
    cout<<" Table of : 29 "<<endl;
    for( int i = 1; i <= 10; i = i+1 ){
        result = 29 * i ;
        cout<<" 29 * " << i <<" = " << result <<endl;
    }
}