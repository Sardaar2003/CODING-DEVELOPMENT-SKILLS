#include <bits/stdc++.h>
using namespace std;
bool bfs(int node, int parent, int visit[], vector<int> adjList[])
{
    queue<pair<int, int>> q;
    q.push({node, parent});
    visit[node] = true;
    while (!q.empty())
    {
        int node1 = q.front().first;
        int parent1 = q.front().second;
        q.pop();
        for (auto it : adjList[node1])
        {
            if (!visit[it])
            {
                visit[it] = true;
                q.push({it, node1});
            }
            else if (it != parent1)
                return true;
        }
    }
    return false;
}
bool detectCycle(int node, vector<int> adjList[])
{
    int visit[node] = {false};
    for (int i = 0; i < node; i++)
    {
        if (!visit[i])
        {
            if (bfs(i, -1, visit, adjList) == true)
                return true;
        }
    }
    return false;
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<int> adjList[node];
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    if (detectCycle(node, adjList) == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}