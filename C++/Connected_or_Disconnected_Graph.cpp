#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adjacencyMatrix[], int u, int v)
{
    adjacencyMatrix[u].push_back(v);
    adjacencyMatrix[v].push_back(u);
}
void printList(vector<int> adjacencyMatrix[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Adjacency list of node : " << i << " ";
        for (auto element : adjacencyMatrix[i])
        {
            cout << "--->" << element << " ";
        }
    }
}
void DFSRec(vector<int> adjacenctMatrix[], vector<bool> &visited, int u)
{
    visited[u] = true;
    cout << u << " ";
    for (int i = 0; i < adjacenctMatrix[u].size(); i++)
    {
        if (visited[adjacenctMatrix[u][i]] == false)
        {
            DFSRec(adjacenctMatrix, visited, adjacenctMatrix[u][i]);
        }
    }
}
void DFS(vector<int> adjacencyMatrix[], int n)
{

    vector<bool> visisted(n, false);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (visisted[i] == false)
        {
            DFSRec(adjacencyMatrix, visisted, i);
            count++;
            cout << endl;
        }
    }
    cout << "The number of connected components : " << count << endl;
    if (count > 1)
    {
        cout << "Disconnected Graph " << endl;
    }
    else
    {
        cout << "Connected Graph " << endl;
    }
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> adjacencyMatrix[nodes];
    // int count = 0;
    for (int i = 0; i < edges; i++)
    {
        int u;
        int v;
        cin >> u >> v;
        addEdge(adjacencyMatrix, u, v);
    }
    DFS(adjacencyMatrix, nodes);

    return 0;
}