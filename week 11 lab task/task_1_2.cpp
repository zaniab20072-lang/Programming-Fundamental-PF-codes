#include<iostream>
using namespace std;

void PrintCars(int cars[][5], int rowSize);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10,7,12,10,4}, {18,11,15,17,2}, {23,19,12,16,14}, {7,12,16,0,2}, {3,5,6,2,1}};
    PrintCars(cars, rowSize);
}

void PrintCars(int cars[][5], int rowSize)
{
    for ( int rows = 0; rows < rowSize; rows++ )
    {
        for( int col =0; col < 5; col++)
        {
            cout<<cars[rows][col] <<"\t";
        }
        cout<<endl;
    }
}