#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adjList[], vector<bool> visited)
{
    visited[node] = true;
    for (auto it : adjList[node])
    {
        if (!visited[it])
            dfs(it, adjList, visited);
    }
}
int main()
{
    int nodes;
    cin >> nodes;
    vector<int> adjList[nodes];
    for (int i = 0; i < nodes; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int count = 0;
    vector<bool> visited(nodes, false);
    for (int i = 0; i < nodes; i++)
    {
        if (!visited[i])
        {
            count++;
            dfs(i, adjList, visited);
        }
    }
    cout << count << endl;
    return 0;
}