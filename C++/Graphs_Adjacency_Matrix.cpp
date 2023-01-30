#include <bits/stdc++.h>
using namespace std;
bool adjacencyMatrix[6][6];
void addEdge(int u, int v)
{
    adjacencyMatrix[u][v] = true;
    adjacencyMatrix[v][u] = true;
}
void printMatrix()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    for (int i = 0; i < 6; i++)
    {
        int u;
        int v;
        cin >> u >> v;
        addEdge(u, v);
    }
    printMatrix();
    return 0;
}