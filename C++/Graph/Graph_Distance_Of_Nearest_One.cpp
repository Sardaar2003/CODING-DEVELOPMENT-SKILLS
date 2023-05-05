#include <bits/stdc++.h>
using namespace std;
int main()
{
    int node, edges;
    cin >> node >> edges;
    vector<vector<int>> grid(node, vector<int>(edges));
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < edges; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> dist(node, vector<int>(edges, 0));
    vector<vector<bool>> visit(node, vector<bool>(edges, 0));
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < edges; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({{i, j}, 0});
                visit[i][j] = 1;
            }
        }
    }
    int deqR[] = {-1, 0, 1, 0};
    int deqC[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int step = q.front().second;
        dist[row][col] = step;
        for (int i = 0; i < 4; i++)
        {
            int newR = row + deqR[i];
            int newC = col + deqC[i];
            if (newR >= 0 && newR < node && newC >= 0 && newC < edges && !visit[newR][newC])
            {
                visit[newR][newC] = true;
                q.push({{newR, newC}, step + 1});
            }
        }
    }
}