#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<" Enter the word in string : ";
    getline(cin, word );

    for( int i =0; word[i] != '\0'; i++ )
    {
        if( word[i] == 'z')
        {
            word[i] = 'a';
        }
        else
        {
            word[i] = word[i] + 1;
        }
    }
    cout<<" New string is : "<<word;
}