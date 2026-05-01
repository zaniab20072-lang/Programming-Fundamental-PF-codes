#include<iostream>
using namespace std;

void position(int matrix[3][3]);

main()
{
    int matrix[3][3];
    position(matrix);

}
void position(int matrix[3][3])
{
    cout<<" Enter your matrix : "<<endl;
    for(int i =0 ; i< 3; i++)
    {
        for(int j =0; j < 3; j++)
        {
           cout<<" The element of the matrix [" <<i <<"][" <<j <<"] = ";
           cin>>matrix[i][j];

        }
    }
    cout<<" Your entered matrix is : "<<endl;
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    if(matrix[0][0]== 1 && matrix[0][1]==0 && matrix[0][2]==0 
        && matrix[1][0] == 0 && matrix[1][1]==1 && matrix[1][2] ==0
        && matrix[2][0]==0 && matrix[2][1]==0 && matrix[2][2]==1)
        {
            cout<<" The entered matrix is identity ";
        }
    else{ cout <<" The entered matrix is not identity "; }
}
