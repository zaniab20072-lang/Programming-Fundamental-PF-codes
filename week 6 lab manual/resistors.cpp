#include<iostream>
using namespace std;

main()
{
    int n, res =0;
    cout<<" Enter the number of resistors in serries circuit : ";
    cin>>n;

    int num[n];
    cout<<" Enter the resistance values in ohm of " <<n <<" resistors per line : "<<endl;

    for( int i = 0; i < n; i++ )
    {
        cin>>num[i];
        res += num[i];
    }
    cout<<" The total resistance of serries circuit is " <<res <<" ohms ";
}