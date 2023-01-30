#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int nodes;
    list<int> *adjacencyList;

public:
    Graph(int n)
    {
        this->nodes = n;
        adjacencyList = new list<int>[nodes];
    }
    void addEdge(int u, int v)
    {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }
    void printList()
    {
        // cout << "Adjacency List : " << endl;
        for (int i = 0; i < nodes; i++)
        {
            cout << "Adjacency Nodes : " << i << endl;
            for (auto element : adjacencyList[i])
            {
                cout << "->" << element << endl;
            }
        }
    }
};
int main()
{
    int numberOfNodes, edges;
    cin >> numberOfNodes >> edges;
    Graph graph(numberOfNodes);
    for (int i = 0; i < numberOfNodes; i++)
    {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }
    graph.printList();
    return 0;
}