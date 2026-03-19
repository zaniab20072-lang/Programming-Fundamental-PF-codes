#include<iostream>
using namespace std;

main()
{
    int num, count =0;
    cout<<" Enter number of customer : ";
    cin>>num;
    string name[num];

    cout<<" Enter the name of " <<num <<" customers : "<<endl;

    for( int i = 0; i < num; i++ )
    {
        cin>>name[i];

    }
    char letter;
    cout<<" Enter a letter to check : ";
    cin>>letter;

    for( int i = 0; i < num; i++ )
    {
        char firstLetter = name[i][0];

        if( firstLetter == letter )
        {
            count++;
        }
    }
    cout<<" Total name string with " <<letter <<" : " <<count;
}