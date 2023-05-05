#include <bits/stdc++.h>
using namespace std;
int numberOfIslands(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visit(n, vector<int>(m, 0));
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                    visit[i][j] = 1;
                }
            }
        }
    }
    int deqR[] = {-1,
                  0,
                  1,
                  0};
    int deqC[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int newR = row + deqR[i];
            int newC = col + deqC[i];
            if (newR >= 0 && newR < n && newC >= 0 && newC < m && visit[newR][newC] == 0 && grid[newR][newC] == 1)
            {
                q.push({newR, newC});
                visit[newR][newC] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && visit[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << numberOfIslands(grid) << endl;
    return 0;
}