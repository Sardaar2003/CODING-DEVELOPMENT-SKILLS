#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int nodes;
    list<int> *adjacencyMatrix;

public:
    Graph(int n)
    {
        this->nodes = n;
        adjacencyMatrix = new list<int>[nodes];
    }
    void addEdge(int u, int v)
    {
        adjacencyMatrix[u].push_back(v);
        adjacencyMatrix[v].push_back(u);
    }
    void printList()
    {
        // cout << "Adjacency List : " << endl;
        for (int i = 0; i < nodes; i++)
        {
            cout << "Adjacency Nodes : " << i << endl;
            for (auto element : adjacencyMatrix[i])
            {
                cout << "->" << element << endl;
            }
        }
    }
    void BFS(int v)
    {
        bool *visited = new bool[nodes];
        for (int i = 0; i < v; i++)
        {
            visited[i] = false;
        }
        list<int> queue;
        visited[v] = true;
        queue.push_back(v);
        while (!queue.empty())
        {
            v = queue.front();
            cout << v << " ";
            queue.pop_front();
            for (auto element : adjacencyMatrix[v])
            {
                if (!visited[element])
                {
                    visited[element] = true;
                    queue.push_back(element);
                }
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
    // graph.printList();
    graph.BFS(0);
    return 0;
}