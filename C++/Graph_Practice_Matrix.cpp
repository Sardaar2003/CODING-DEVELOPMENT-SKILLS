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
            adjacencyMatrix[i] = new bool[nodes - 1];
            for (int j = 0; j < nodes; j++)
            {
                adjacencyMatrix[i][j] = false;
            }
        }
    }
    void addEdge(int u, int v)
    {
        adjacencyMatrix[u][v] = true;
        adjacencyMatrix[v][u] = false;
    }
    void printMatrix()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout << "Nodes : " << i << endl;
            for (int j = 0; j < nodes; j++)
            {
                cout << adjacencyMatrix[i][j] << "--> ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    Graph graph(nodes);
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }
    graph.printMatrix();
}