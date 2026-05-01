#include <iostream>
using namespace std;

void position(int matrix[][3], int rowSize);
void countIdenticalRows(int matrix[][3], int rowSize);

main()
{
    int rowSize;
    cout << " Enter row size of the your matrix :";
    cin >> rowSize;
    int matrix[rowSize][3];
    position(matrix, rowSize);
    countIdenticalRows(matrix, rowSize);
}
void position(int matrix[][3], int rowSize)
{
    cout << " Enter your matrix : " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " The element of the matrix [" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}
void countIdenticalRows(int matrix[][3], int rowSize)
{
    int count = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = i+1; j < rowSize; j++)
        {
            bool isIdentical = true;
            for(int col =0; col < 3; col++)
            {
                if(matrix[i][col]  != matrix[j][col])
                {
                    isIdentical = false;
                    break;
                }
            }
            if(isIdentical)
            {
                count++;
                break;
            }
        }
    }
    cout << "\nTotal identical row pairs found: " <<count+count <<endl;
}