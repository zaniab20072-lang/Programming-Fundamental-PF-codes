#include<iostream>
using namespace std;

main()
{
    int n = 5;
    cout<<" Enter name of 5 students : "<<endl;
    string name[n];

    for( int i = 0; i < n; i++ )
    {
        cin>>name[i];
    }
    cout<<" Students name are : "<<endl;
    for( int i = 0; i < n; i++ )
    {
        cout<<name[i] <<endl;
    }
}