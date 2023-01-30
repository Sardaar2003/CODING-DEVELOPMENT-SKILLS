#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int **adjacencyMatrix;
    int node;

public:
    Graph(int nodes)
    {
        this->node = nodes;
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
    void addEdge(int u, int v, int w)
    {
        adjacencyMatrix[u][v] = w;
        adjacencyMatrix[v][u] = w;
    }
    void printMatix()
    {
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                // cout << "Vertex : " << i << " Edges : " << j << " ";
                cout << adjacencyMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    int minim(int minimumWeight[], bool mst[])
    {
        int index = -1;
        for (int i = 0; i < node; i++)
        {
            if (!mst[i] && (index == -1 || minimumWeight[index] > minimumWeight[i]))
            {
                index = i;
            }
        }
        return index;
    }
    void PrimAlgo()
    {
        int result[node];
        memset(result, -1, sizeof(result));
        bool mst[node];
        for (int i = 0; i < node; i++)
            mst[i] = false;
        int minimumWeight[node];
        for (int i = 0; i < node; i++)
            minimumWeight[i] = INT_MAX;
        for (int i = 0; i < node - 1; i++)
        {
            int miniValue = minim(minimumWeight, mst);
            mst[miniValue] = true;
            for (int j = 0; j < node; j++)
            {
                if (adjacencyMatrix[miniValue][j] > 0 && mst[j] == false)
                {
                    if (minimumWeight[j] > adjacencyMatrix[miniValue][j])
                    {
                        result[j] = miniValue;
                        minimumWeight[j] = adjacencyMatrix[miniValue][j];
                    }
                }
            }
        }
        for (int i = 1; i < node; i++)
        {
            cout << result[i] << " to " << i << endl;
        }
    }
};
int main()
{
    int numberOfNodes, numberOfEdges;
    cin >> numberOfNodes >> numberOfEdges;
    Graph graph(numberOfNodes);
    for (int i = 0; i < numberOfEdges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph.addEdge(u, v, w);
    }
    graph.printMatix();
    // cout << endl;
    graph.PrimAlgo();
}