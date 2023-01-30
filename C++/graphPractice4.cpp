#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int nodes;
    int **adjacencyMatrix;

public:
    Graph(int nodes)
    {
        this->nodes = nodes;
        adjacencyMatrix = new int *[nodes];
        for (int i = 0; i < nodes; i++)
        {
            adjacencyMatrix[i] = new int[nodes];
            for (int j = 0; j < nodes; j++)
            {
                adjacencyMatrix[i][j] = 0;
            }
        }
    }
    void addEdges(int a, int b)
    {
        adjacencyMatrix[a][b] = 1;
        adjacencyMatrix[b][a] = 1;
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
    int nodes, edges;
    cin >> nodes >> edges;
    Graph graph(nodes);
    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        graph.addEdges(a, b);
    }
    graph.printMatrix();
}