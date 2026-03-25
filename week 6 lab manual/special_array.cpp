#include<iostream>
using namespace std;

main()
{
    int size;
    cout<<" Enter the sixe of the array : ";
    cin>>size;

    cout<<" Enter " <<size <<" elements , of the array : " <<endl;
    int num[size];
    for( int i = 0 ; i < size; i++ )
    {
        cin>>num[i];
    }
    bool isfound = false;
    for( int i = 0; i < size; i++ )
    {
        if( i % 2 == 0 )
        {
            if( num[i] % 2 == 0 )
            {
                isfound = true ;
                break;
            }
        }
        else
        {
            if( num[i] % 2 != 0 )
           {
              isfound = true;
              break;
           }
       }
    }
    if ( isfound )
    {
        cout<<" It is specail array ";
    }
    else
    {
      cout<<" It is not specail array ";
    }
}