#include <bits/stdc++.h>
using namespace std;

// Define a structure to represent edges
struct Edge
{
    int src, dest, weight;
};

// Define a structure to represent the disjoint set
struct DisjointSet
{
    int *parent, *rank;
    int n;

    DisjointSet(int n)
    {
        this->n = n;
        parent = new int[n + 1];
        rank = new int[n + 1];

        // Initialize all the parent nodes as -1 and rank as 0
        for (int i = 0; i <= n; i++)
        {
            parent[i] = -1;
            rank[i] = 0;
        }
    }

    // Find the root of the set that contains x
    int find(int x)
    {
        if (parent[x] == -1)
        {
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    // Union two sets using their rank to keep the tree balanced
    void union_set(int x, int y)
    {
        int root_x = find(x);
        int root_y = find(y);
        if (root_x != root_y)
        {
            if (rank[root_x] > rank[root_y])
            {
                parent[root_y] = root_x;
            }
            else
            {
                parent[root_x] = root_y;
                if (rank[root_x] == rank[root_y])
                {
                    rank[root_y]++;
                }
            }
        }
    }
};

// Compare function for sorting the edges in increasing order of their weight
bool compare(const Edge &a, const Edge &b)
{
    return a.weight < b.weight;
}

// Kruskal's algorithm to find MST
void kruskalMST(vector<Edge> &edges, int n)
{
    sort(edges.begin(), edges.end(), compare); // Sort the edges in increasing order of weight
    DisjointSet ds(n);                         // Create a disjoint set of n nodes
    int mst_weight = 0;                        // Initialize the weight of MST as 0
    vector<Edge> mst;                          // Create an empty vector to store the MST edges
    for (auto e : edges)
    {
        int u = e.src;
        int v = e.dest;
        int weight = e.weight;
        if (ds.find(u) != ds.find(v))
        {                         // If u and v belong to different sets
            ds.union_set(u, v);   // Union the sets
            mst_weight += weight; // Add the weight of the edge to the MST weight
            mst.push_back(e);     // Add the edge to the MST
        }
    }
    cout << "Minimum Spanning Tree:\n";
    for (auto e : mst)
    { // Print the MST edges
        cout << e.src << " -- " << e.dest << " : " << e.weight << "\n";
    }
    cout << "Weight of Minimum Spanning Tree: " << mst_weight << "\n";
}

int main()
{
    int n, m;
    cin >> n >> m;         // Input the number of nodes and edges
    vector<Edge> edges(m); // Create a vector to store the edges
    for (int i = 0; i < m; i++)
    {
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight; // Input the edge source, destination, and weight
    }
    kruskalMST(edges, n); // Find the MST using Kruskal's algorithm
    return 0;
}
