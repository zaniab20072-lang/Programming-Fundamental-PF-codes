#include<iostream>
using namespace std;
 
int findAge( string studentName, string nameArray[], int ageArray[], int size );

main()
{
    string studentName;
    cout<<" Enter student name : ";
    cin>>studentName;
    string nameArray[] = { "ali", "amar", "ahmad" };
    int ageArray[] = { 23, 12, 34 };
    int Age = findAge( studentName, nameArray, ageArray, 3 );
    if( Age == -1 )
    {
        cout<<" Record not found ";
    }
    else
    { 
        cout<<" The age is : "<<Age;
    }
}

int findAge( string studentName, string nameArray[], int ageArray[], int size )
{
    int age = -1;
    for( int i = 0; i < size; i++)
    {
        if( studentName == nameArray[i] )
        {
            age = ageArray[i];
        }
    }
    return age;
}