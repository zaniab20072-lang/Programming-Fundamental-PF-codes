#include<iostream>
using namespace std;

string fire(char board[5][5], string input );

main() 
{
    char board[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}
    };
    string input;
    cout << "Enter coordinate to fire torpedo (e.g., A1, B3, E5): ";
    cin >> input;
    cout << "Result: " << fire(board, input) << endl;
}
string fire(char board[5][5], string input )
{
    
            int i = input[0] - 'A';
            int j = input[1] - '1';
            if(board[i][j]== '*')
            {
                return "splash";
            }
            else{
                return "boom";
            }
}