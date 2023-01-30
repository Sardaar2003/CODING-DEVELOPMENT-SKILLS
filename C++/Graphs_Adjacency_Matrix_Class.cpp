#include <bits/stdc++.h>
using namespace std;
class Graph
{
    bool **adjacencyMatrix;
    int nodes;

public:
    Graph(int nodes)
    {
        this->nodes = nodes;
        adjacencyMatrix = new bool *[nodes];
        for (int i = 0; i < nodes; i++)
        {
            adjacencyMatrix[i] = new bool[nodes];
            for (int j = 0; j < 6; j++)
            {
                adjacencyMatrix[i][j] = false;
            }
        }
    }
    void addEdge(int u, int v)
    {
        adjacencyMatrix[u][v] = true;
        adjacencyMatrix[v][u] = true;
    }
    void printMatrix()
    {
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < nodes; j++)
            {
                cout << adjacencyMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int size, e;
    cin >> size >> e;
    Graph graph(size);
    for (int i = 0; i < size; i++)
    {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }
    graph.printMatrix();
    return 0;
}