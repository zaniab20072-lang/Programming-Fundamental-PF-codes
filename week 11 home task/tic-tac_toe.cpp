#include <iostream>
using namespace std;

bool checkRows(char symbol, int gridSize, char board[3][3]);
bool checkColumns(char symbol, int gridSize, char board[3][3]);
bool checkDiagonals(char symbol, int gridSize, char board[3][3]);
bool isWinner(char symbol, int gridSize, char board[3][3]);

main()
{
    const int gridSize = 3;
    char board[gridSize][gridSize] = {{'O', 'O', 'X'}, {'O', 'O', 'X'}, {'X', 'X', 'O'}};
    char symbol;
    cout << " Enter Symbol";
    cin >> symbol;
    checkRows(symbol, gridSize, board);
    checkColumns(symbol, gridSize, board);
    checkDiagonals( symbol, gridSize, board);
    isWinner(symbol, gridSize, board);
}
bool checkRows(char symbol, int gridSize, char board[3][3])
{
    int count = 0;
    for (int i = 0; i < gridSize; i++)
    {
        count = 0;
        for (int col = 0; col < gridSize; col++)
        {
            if (board[i][col] == symbol)
            {
                count++;
            }
        }
        if (count == gridSize)
        {
            return true;
        }
    }
    return false;
}
bool checkColumns(char symbol, int gridSize, char board[3][3])
{

    int count = 0;
    for (int col = 0; col < gridSize; col++)
    {
        count = 0;
        for (int i = 0; i < gridSize; i++)
        {
            if (board[i][col] == symbol)
            {
                count++;
            }
        }
        if (count == gridSize)
        {
            return true;
        }
    }
    return false;
}
bool checkDiagonals(char symbol, int gridSize, char board[3][3])
{
    int count = 0;
    for (int idx = 0; idx < gridSize; idx++)
    {
        if (board[idx][idx] == symbol)
        {
            count++;
        }
    }
    if (count == gridSize)
    {
        return true;
    }
    count = 0;
    for (int row = 0, col = 2; row < gridSize; row++, col--)
    {
        if (board[row][col] == symbol)
        {
            count++;
        }
    }
    if (count == gridSize)
    {
        return true;
    }
    return false;
}
bool isWinner(char symbol, int gridSize, char board[3][3])
{
    if (checkRows(symbol, gridSize, board) || checkColumns(symbol, gridSize, board) || checkDiagonals(symbol, gridSize, board))
    {
        return true;
    }
    else
    {
        return false;
    }
}