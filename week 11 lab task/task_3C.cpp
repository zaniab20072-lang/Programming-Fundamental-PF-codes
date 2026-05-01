#include<iostream>
using namespace std;

void NissanCars(int cars[][5], int colSize);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10,7,12,10,4}, {18,11,15,17,2}, {23,19,12,16,14}, {7,12,16,0,2}, {3,5,6,2,1}};
    NissanCars(cars, colSize);
}

void NissanCars(int cars[][5], int colSize)
{
    int count =0;
    for ( int col = 0; col < colSize; col++ )
    {
        count = count + cars[2][col];
    }
    cout<<count;
}