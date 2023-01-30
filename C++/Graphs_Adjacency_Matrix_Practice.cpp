#include <bits/stdc++.h>
using namespace std;
void addEdge(int[][] adjacencyMatrix, int u, int v)
{
    adjacencyMatrix[u][v] = 1;
    adjacencyMatrix[v][u] = 1;
}
void printMatrix(int[][] adjacencyMatrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (auto element : adjacencyMatrix[i])
        {
            cout << element << " - ";
        }
    }
}
int main()
{
    int numberOfNodes, numberOfEdges;
    cin >> numberOfNodes >> numberOfEdges;
    int adjacencyMatrix[numberOfNodes][numberOfNodes];
    for (int i = 0; i < numberOfEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adjacencyMatrix, u, v);
    }
    printMatrix(adjacencyMatrix, numberOfNodes);
}