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
        adjacencyList = new list<int>[nodes];
    }
    void addEdge(int a, int b)
    {
        adjacencyList[a].push_back(b);
        adjacencyList[b].push_back(a);
    }
    void dfsTraversal(int node, vector<bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (auto element : adjacencyList[node])
        {
            if (!visited[element])
                dfsTraversal(element, visited);
        }
    }
    void dfs(int node)
    {
        // bool *visited = new bool[nodes];
        vector<bool> visited(nodes, false);
        visited[node] = true;
        for (auto element : adjacencyList[node])
        {
            if (!visited[node])
            {
                dfsTraversal(node, visited);
            }
        }
    }
    void printList()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout << i << " ===>>>";
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
        int a, b;
        cin >> a >> b;
        graph.addEdge(a, b);
    }
    graph.dfs(0);
    graph.printList();
    return 0;
}