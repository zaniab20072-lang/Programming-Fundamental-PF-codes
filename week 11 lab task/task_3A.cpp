#include<iostream>
using namespace std;

void ToyotaBlueCars(int cars[][5], int row, int col);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10,7,12,10,4}, {18,11,15,17,2}, {23,19,12,16,14}, {7,12,16,0,2}, {3,5,6,2,1}};
    int row = 1 , col =3 ;
    ToyotaBlueCars(cars, row, col);
}

void ToyotaBlueCars(int cars[][5], int row, int col)
{
   cout<<cars[row][col];
}