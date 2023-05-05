#include <bits/stdc++.h>
using namespace std;
bool isValid(int board[9][9], int i, int j, int k)
{
    for (int l = 0; l < 9; l++)
    {
        if (board[l][j] == k)
            return false;
        if (board[j][l] == k)
            return false;
        if (board[3 * (i / 3) + l / 3][3 * (j / 3) + l % 3] == k)
            return false;
    }
    return true;
}
bool solve(int board[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == 0)
            {
                for (int k = 1; k < 9; k++)
                {
                    if (isValid(board, i, j, k))
                    {
                        board[i][j] = k;
                        if (solve(board) == true)
                            return true;
                        else
                            board[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    // vector<vector<int>> sudoku(9, vector<int>(9, 0));
    int sudoku[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            cin >> sudoku[i][j];
    }

    solve(sudoku);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}