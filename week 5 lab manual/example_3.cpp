#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<" Number : ";
    cin>>n;
    int n1 = 0 , n2 = 1 , next;
    cout<<n1 <<"," <<n2;
    for( int i = 1; i < 10; i = i+1 ){
        next = n1 + n2 ;
        cout<<" , "<<next;
        n1 = n2;
        n2 = next;
        
    }
}