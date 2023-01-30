#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int nodes;
    list<int> *adjacencyList;

public:
    Graph(int node)
    {
        this->nodes = node;
        adjacencyList = new list<int>[node];
    }
    void addEdge(int u, int v)
    {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }
    void printList()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout << "Node : " << i << " ::  ";
            for (auto element : adjacencyList[i])
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
        graph.addEdge(u, v);
    }
    graph.printList();
}