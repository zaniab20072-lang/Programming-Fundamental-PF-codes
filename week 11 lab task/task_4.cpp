#include<iostream>
using namespace std;

int position(int matrix[][3], int rowSize);

main()
{
    int rowSize ;
    cout<<" Enter row size of your matrix : ";
    cin>>rowSize;
    int matrix[rowSize][3];
    cout<<" The sum of your matix : " <<position(matrix, rowSize);

}
int position(int matrix[][3], int rowSize)
{
    int sum = 0;
    for(int i =0 ; i< rowSize; i++)
    {
        for(int j =0; j < 3; j++)
        {
           cout<<" The element of the matrix [" <<i <<"][" <<j <<"] = ";
           cin>>matrix[i][j];
           sum = sum + matrix[i][j];

        }
    }
    return sum;
}
