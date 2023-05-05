// #include <bits/stdc++.h>
// using namespace std;
// bool isValid(int **board, int n, int row, int col)
// {
//     for (int i = 0; i < col; i++)
//     {
//         if (board[row][i] == 1)
//             return false;
//     }
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//     {
//         if (board[i][j] == 1)
//             return false;
//     }
//     for (int i = row, j = col; i < n && j >= 0; i++, j--)
//     {
//         if (board[i][j] = 1)
//             return false;
//     }
//     return true;
// }
// bool nQueens(int n, int **board, int col)
// {
//     if (col >= n)
//         return true;
//     for (int i = 0; i < n; i++)
//     {
//         if (isValid(board, n, i, col))
//         {
//             board[i][col] = 1;
//             if (nQueens(n, board, col + 1))
//                 return true;
//             board[i][col] = 0;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int **board = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         board[i] = new int[n];
//     }
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             board[i][j] = 0;
//     if (!nQueens(n, board, 0))
//         cout << "No Solution Exists " << endl;
//     else
//         for (int i = 0; i < n; i++)
//         {

//             for (int j = 0; j < n; j++)
//             {

//                 cout << board[i][j] << " ";
//             }
//             cout << endl;
//         }
// }
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    int reRow = row;
    int reCol = col;
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
            return false;
        row--;
        col--;
    }
    row = reRow;
    col = reCol;
    while (col >= 0)
    {
        if (board[row][col] = 1)
            return false;
        col--;
    }
    row = reRow;
    col = reCol;
    while (row < n && col >= 0)
    {
        if (board[row][col] == 1)
            return false;
        row++;
        col--;
    }
    return true;
}
void NQueen(int col, int n, vector<vector<int>> &board)
{
    if (col == n)
    {
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 1;
            NQueen(col + 1, n, board);
            board[row][col] = 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, 0));
    NQueen(0, n, board);
    for (vector<int> item : board)
    {
        for (int it : item)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}