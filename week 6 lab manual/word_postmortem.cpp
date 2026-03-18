#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<" Enter a word : ";
    cin>>word;
    char letter;

    for( int i =0; word[i] != '\0'; i++ )
    {
        letter = word[i];
        cout<<letter <<" is found at position " <<i <<endl;
    }
}