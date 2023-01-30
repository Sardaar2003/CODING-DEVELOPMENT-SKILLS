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
    void addEdge(int u, int v)
    {
        adjacencyMatrix[u].push_back(v);
        adjacencyMatrix[v].push_back(u);
    }
    void printList()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout << i << " ---> ";
            for (auto element : adjacencyMatrix[i])
            {
                cout << element << " ";
            }
            cout << endl;
        }
    }
    void BFSTraversal(int v)
    {
        list<int> q;
        bool *visited = new bool[nodes];
        q.push_back(v);
        visited[v] = true;
        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop_front();
            cout << frontNode << " ";
            for (auto element : adjacencyMatrix[frontNode])
            {
                if (!visited[element])
                {
                    visited[element] = true;
                    q.push_back(element);
                }
            }
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
    graph.BFSTraversal(0);
    return 0;
}