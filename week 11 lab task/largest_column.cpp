#include<iostream>
using namespace std;

void position(int matrix[3][5]);

main()
{
    int matrix[3][5];
    position(matrix);

}
void position(int matrix[3][5])
{
    cout<<" Enter your matrix : "<<endl;
    for(int i =0 ; i< 3; i++)
    {
        for(int j =0; j < 5; j++)
        {
           cout<<" The element of the matrix [" <<i <<"][" <<j <<"] = ";
           cin>>matrix[i][j];

        }
    }
    cout<<" Your entered matrix is : "<<endl;
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <5; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<" matrix after lrgest column : "<<endl;
    
    int maxsum = -999;
    int largestCol = 0;
    for(int j =0; j < 5; j++)
    {
        int sum =0;
        for(int i =0; i < 3; i++)
        {
           sum = sum + matrix[i][j];
           if(sum > maxsum)
           {
             maxsum = sum;
             largestCol = j;
           }
        }
    }

    for(int i = 0; i < 3; i++) 
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][largestCol];
        matrix[i][largestCol] = temp;
    }
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <5; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}