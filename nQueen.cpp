#include <iostream>
#include <vector>
using namespace std;
int count = 0;

void printSolution(int n, vector<vector<int>> &board)
{
    if (count == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        count = 1;
    }
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    // for row

    int x, y;
    x = row;
    y = col;

    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 1)
        {
            return false;
        }
    }

    // for upper diagonal
    x = row - 1;
    y = col - 1;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    // for lower diagonal
    x = row + 1;
    y = col - 1;
    while (x < n && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x++;
        y--;
    }

    return true;
}

void solve(int col, vector<vector<int>> &board, int n)
{
    if (col == n)
    {
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << board[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << "********** " << endl;
        printSolution(n, board);
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 1;
            solve(col + 1, board, n);
            board[row][col] = 0;
        }
    }
}

void nQueens(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));
    solve(0, board, n);
}

int main()
{
    int t;
    cout << "Enter the size of board " << endl;
    cin >> t;
    nQueens(t);
    return 0;
}