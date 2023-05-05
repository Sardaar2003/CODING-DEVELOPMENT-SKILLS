#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void floydWarshall(int **graph, int V)
{
    int dist[V][V], i, j, k;

    // Initialize the dist array as the adjacency matrix of the graph
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    // Compute shortest paths between all pairs of vertices using dynamic programming
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Print the shortest distances between all pairs of vertices
    cout << "Shortest distances between all pairs of vertices:" << endl;
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            if (dist[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << dist[i][j] << "   ";
        }
        cout << endl;
    }
}

int main()
{
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    // Create the adjacency matrix of the graph
    int **graph = new int *[V];
    for (int i = 0; i < V; i++)
    {
        graph[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            cout << "Enter the weight of edge " << i << " - " << j << ": ";
            cin >> graph[i][j];
            if (graph[i][j] == -1)
                graph[i][j] = INT_MAX; // Replace -1 with INF
        }
    }

    floydWarshall(graph, V);

    // Free dynamically allocated memory
    for (int i = 0; i < V; i++)
        delete[] graph[i];
    delete[] graph;

    return 0;
}
