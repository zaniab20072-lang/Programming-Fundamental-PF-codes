#include<iostream>
using namespace std;

main()
{
    int sum =0;
    float avrg =0;
    int number[5] = {1, 2, 3, 4, 5 };

    for( int count = 0; count < 5; count++ )
    {
        sum = sum + number[count];
    }

    avrg = sum / 5;
    cout<<" Sum : " <<sum <<endl;
    cout<<" Average : " <<avrg <<endl;
}