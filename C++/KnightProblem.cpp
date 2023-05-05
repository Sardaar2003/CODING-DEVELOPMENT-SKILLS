#include <bits/stdc++.h>
using namespace std;
bool isValid(int x, int y, int **board, int n)
{
    if (x >= 0 && y >= 0 && x < n && y < n && board[x][y] == -1)
        return true;
    else
        return false;
}
bool knightTour(int **board, int n, int move_x[], int move_y[], int curr_x, int curr_y, int post)
{
    if (post == n * n)
        return true;
    for (int i = 0; i < 8; i++)
    {
        int new_x = curr_x + move_x[i];
        int new_y = curr_y + move_y[i];
        if (isValid(new_x, new_y, board, n))
        {
            board[new_x][new_y] = post;
            if (knightTour(board, n, move_x, move_y, new_x, new_y, post + 1))
                return true;
            board[new_x][new_y] = -1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **board = new int *[n];
    for (int i = 0; i < n; i++)
        board[i] = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            board[i][j] = -1;
    }
    int move_x[] = {2,
                    1,
                    -1,
                    -2,
                    -2,
                    -1,
                    1,
                    2};
    int move_y[] = {1,
                    2,
                    2,
                    1,
                    -1,
                    -2,
                    -2, -1};
    board[0][0] = 0;
    int post = 1;
    if (!knightTour(board, n, move_x, move_y, 0, 0, post))
    {
        cout << "No Solution Exists" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
}