#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int MAXN = 1005;
const int INF = 1e9;

vector<int> adj[MAXN];
int cap[MAXN][MAXN], flow[MAXN][MAXN], parent[MAXN];

int bfs(int source, int sink)
{
    memset(parent, -1, sizeof(parent));
    queue<int> q;
    q.push(source);
    parent[source] = -2;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (parent[v] == -1 && cap[u][v] - flow[u][v] > 0)
            {
                parent[v] = u;
                q.push(v);
                if (v == sink)
                    return 1;
            }
        }
    }
    return 0;
}

int edmondsKarp(int source, int sink)
{
    int maxFlow = 0;
    while (bfs(source, sink))
    {
        int pathFlow = INF;
        for (int v = sink; v != source; v = parent[v])
        {
            int u = parent[v];
            pathFlow = min(pathFlow, cap[u][v] - flow[u][v]);
        }
        for (int v = sink; v != source; v = parent[v])
        {
            int u = parent[v];
            flow[u][v] += pathFlow;
            flow[v][u] -= pathFlow;
        }
        maxFlow += pathFlow;
    }
    return maxFlow;
}

int main()
{
    int n, m;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cout << "Enter the start, end, and capacity of edge " << i << ": ";
        cin >> u >> v >> c;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cap[u][v] += c;
    }

    int source, sink;
    cout << "Enter the source and sink nodes: ";
    cin >> source >> sink;

    int maxFlow = edmondsKarp(source, sink);
    cout << "The maximum flow in the network is: " << maxFlow << endl;

    return 0;
}
