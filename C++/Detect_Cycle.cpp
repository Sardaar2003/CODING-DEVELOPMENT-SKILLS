#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adjacencyMatrix[], int u, int v)
{
    adjacencyMatrix[u].push_back(v);
    adjacencyMatrix[v].push_back(u);
}
bool isCyclicConnected(vector<int> adjacencyMatrix[], int s, int nodes, vector<bool> &visited)
{
    vector<int> parent(n, -1);
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto element : adjacencyMatrix[u])
        {
            if (!visited[element])
            {
                visited[element] = true;
                q.push(element);
                parent[element] = u;
            }
            else if (parent[u] != element)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adjacencyMatrix[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }
    bool flag = false;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && isCyclicConnected(adjacencyMatrix, i, n, visited))
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}