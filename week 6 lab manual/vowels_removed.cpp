#include<iostream>
using namespace std;

main()
{
    string name, res = "";
    cout<<" Enter the arrgument : ";
    getline( cin, name );

    for( int i =0; name[i] != '\0'; i++ )
    {
        if( name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u' &&
            name[i] != 'A' && name[i] != 'E' && name[i] != 'I' && name[i] != 'O' && name[i] != 'U' )
        {
            res += name[i];
        }
    }
    cout<<" String with vowels removed : " <<res;

}