#include<iostream>

using namespace std;

char character(char ch );

int main()
{
    char ch;
    cout<<" Enter a character (A/a) : ";
    cin>>ch;
    character(ch);
    return 0;
}
char character(char ch)
{
    if(ch == 'A')
    {
        cout<<" You have entered Capital "<<ch;
    }
    else
    {
        cout<<" You have entered small "<<ch;       
    }
}