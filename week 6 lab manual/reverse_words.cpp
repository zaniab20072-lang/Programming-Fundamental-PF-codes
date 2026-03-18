#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<" Enter a word : ";
    cin>>word;
    int word_length =0;

    for( int i = 0; word[i] != '\0'; i++ )
    {
        word_length ++ ; 
    }
    cout<<" Reverse words : ";
    for( int i = word_length - 1; i >= 0; i-- )
    {
        cout<<word[i];
    }
}