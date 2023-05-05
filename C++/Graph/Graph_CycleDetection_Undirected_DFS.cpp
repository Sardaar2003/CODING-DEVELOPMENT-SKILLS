#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, int parent, int visit[], vector<int> adj[])
{
    visit[node] = true;
    for (auto it : adj[node])
    {
        if (!visit[it])
        {
            if (dfs(it, node, visit, adj))
                return true;
        }
        else if (it != parent)
            return true;
    }
    return false;
}
bool detectCycle(int node, vector<int> adj[])
{
    int visit[node] = {false};
    for (int i = 0; i < node; i++)
    {
        if (!visit[i])
        {
            if (dfs(i, -1, visit, adj))
                return true;
        }
    }
    return false;
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<int> adj[node];
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // bool visit[node] = {false};
    if (detectCycle(node, adj) == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}