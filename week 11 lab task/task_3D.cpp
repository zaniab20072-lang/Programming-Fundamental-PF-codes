#include <iostream>
using namespace std;

void Cars(int cars[][5], int rowSize, int colSize);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    Cars(cars, rowSize, colSize);
}

void Cars(int cars[][5], int rowSize, int colSize)
{
    for (int col = 0; col < colSize; col++)
    {
        for(int row =0; row < rowSize; row++)
        {
            cout<<cars[row][col] <<"\t";
        }
        cout<<endl;
    }
}