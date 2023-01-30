#include <bits/stdc++.h>
using namespace std;
void topologicalSorting(int **adjacencyMatrix, int nodes, int u, int visited[], stack<int> &st)
{
    visited[u] = 1;
    for (int i = 0; i < nodes; i++)
    {
        if (adjacencyMatrix[u][i] == 1 && visited[i] == 0)
        {
            topologicalSorting(adjacencyMatrix, nodes, i, visited, st);
        }
    }
    st.push(u);
}
int main()
{
    int numberOfNodes, numberOfEdges;
    cin >> numberOfNodes >> numberOfEdges;
    int visited[100005];
    memset(visited, 0, sizeof(visited));
    int *adjacencyList[numberOfNodes];
    for (int i = 0; i < numberOfNodes; i++)
    {
        adjacencyList[i] = new int[numberOfNodes];
    }
    for (int i = 0; i < numberOfEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacencyList[u][v] = 1;
    }
    stack<int> st;
    for (int i = 0; i < numberOfNodes; i++)
    {
        if (visited[i] == 0)
        {
            topologicalSorting(adjacencyList, numberOfNodes, i, visited, st);
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
}