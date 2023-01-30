#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int nodes;
    list<int> *adjacencyList;

public:
    Graph(int nodes)
    {
        this->nodes = nodes;
        adjacencyList = new list<int>[nodes];
    }
    void addEdge(int a, int b)
    {
        adjacencyList[a].push_back(b);
        adjacencyList[b].push_back(a);
    }
    void BFSTraversal(int node)
    {
        queue<int> q;
        q.push(node);
        bool *visited = new bool[nodes];
        for (int i = 0; i < node; i++)
        {
            visited[i] = false;
        }
        visited[node] = true;
        while (!q.empty())
        {
            node = q.front();
            cout << node << " ";
            q.pop();
            for (auto element : adjacencyList[node])
            {
                if (!visited[element])
                {
                    visited[element] = true;
                    q.push(element);
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
        int a, b;
        cin >> a >> b;

        graph.addEdge(a, b);
    }
    graph.BFSTraversal(0);
}