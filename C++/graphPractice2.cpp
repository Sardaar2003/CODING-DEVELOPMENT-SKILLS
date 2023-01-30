#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int nodes;
    int **adjacencyMatrix;

public:
    Graph(int node)
    {
        this->nodes = node;
        adjacencyMatrix = new int *[this->nodes];
        for (int i = 0; i < node; i++)
        {
            adjacencyMatrix[i] = new int[node];
            for (int j = 0; j < node; j++)
            {
                adjacencyMatrix[i][j] = 0;
            }
        }
        // this->adjacencyMatrix = new int[(this->nodes + 1)][(this->nodes + 1)];
    }
    void addEdge(int u, int v)
    {
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }
    void printData()
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
    int nodes, edges;
    cin >> nodes >> edges;
    Graph graph(nodes);
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }
    graph.printData();
    return 0;
}