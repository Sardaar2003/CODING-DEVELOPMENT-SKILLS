#include <bits/stdc++.h>
using namespace std;
bool isBipartite(int **adjacencyMatrix, int colorArray[], int root, int nodes)
{
    colorArray[root] = 1;
    queue<int> q;
    q.push(root);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < nodes; i++)
        {
            if (adjacencyMatrix[v][i] == 1)
            {
                if (colorArray[i] == -1)
                {
                    colorArray[i] = 1 - colorArray[v];
                    q.push(i);
                }
                else if (colorArray[i] == colorArray[v])
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    int *adjacencyMatrix[nodes];
    for (int i = 0; i < nodes; i++)
    {
        adjacencyMatrix[i] = new int[nodes];
    }
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }
    int colorArray[100005];
    memset(colorArray, -1, sizeof(colorArray));
    if (isBipartite(adjacencyMatrix, colorArray, 0, nodes))
    {
        cout << "Graph is Bipartite" << endl;
    }
    else
    {
        cout << "Graph is not Bipartite" << endl;
    }
    return 0;
}