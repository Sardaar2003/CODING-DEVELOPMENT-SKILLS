#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int nodes;
    list<int> *adjacencyMatrix;

public:
    Graph(int nodes)
    {
        this->nodes = nodes;
        adjacencyMatrix = new list<int>[nodes];
    }
    void addEdge(int u, int v, int direction)
    {
        adjacencyMatrix[u].push_back(v);
        if (direction == 0)
        {
            adjacencyMatrix[v].push_back(u);
        }
    }
    void printList()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout << i << "--->>";
            for (auto element : adjacencyMatrix[i])
            {
                cout << element << " ";
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
        graph.addEdge(u, v, 0);
    }
    graph.printList();
    return 0;
}