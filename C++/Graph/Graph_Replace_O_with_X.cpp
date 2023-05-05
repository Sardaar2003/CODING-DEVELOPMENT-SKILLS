#include <bits/stdc++.h>
using namespace std;
void dfs(int row, int col, vector<vector<int>> visit, vector<vector<char>> grid, int deqR[], int deqC[], int n, int m)
{
    visit[row][col] = 1;
    for (int i = 0; i < 4; i++)
    {
        int newRow = row + deqR[i];
        int newCol = col + deqC[i];
        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !visit[newRow][newCol] && grid[newRow][newCol] == 'O')
        {
            dfs(newRow, newCol, visit, grid, deqR, deqC, n, m);
        }
    }
}
void replaceOwithX(int n, int m, vector<vector<int>> grid)
{
    vector<vector<int>> visit(n, vector<int>(m, 0));
    int deqR[] = {-1, 0, 1, 0};
    int deqC[] = {0, 1, 0, -1};
    for (int i = 0; i < n; i++)
    {
        if (!visit[0][i] && grid[0][i] == 'O')
        {
            dfs(0, i, visit, grid, deqR, deqC, n, m);
        }
        if (!visit[m - 1][i] && grid[m - 1][i] == 'O')
        {
            dfs(m - 1, i, visit, grid, deqR, deqC, n, m);
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (!visit[j][0] && grid[j][0] == 'O')
            dfs(j, 0, visit, grid, deqR, deqC, n, m);
        if (!visit[j][n - 1] && grid[j][n - 1] = 'O')
            dfs(j, n - 1 visit, grid, deqR, deqC, n, m);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    replaceOwithX(n, m, grid);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}