#include <bits/stdc++.h>

using namespace std;
void addEdge(int firstVertex, int secondVertex, int weight, vector<pair<int, int>> adjacencyList[])
{
    adjacencyList[firstVertex].emplace_back(secondVertex, weight);
    adjacencyList[secondVertex].emplace_back(firstVertex, weight);
}
void printList(vector<pair<int, int>> adjacencyList[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Vertex : " << i << endl;
        for (auto element : adjacencyList[i])
        {
            cout << "First element : " << element.first << " Second Element : " << element.second << endl;
        }
    }
}
int main()
{
    int numberOfNodes, numberOfEdges;
    cin >> numberOfNodes >> numberOfEdges;
    vector<pair<int, int>> adjacencyList[numberOfNodes];
    for (int i = 0; i < numberOfEdges; i++)
    {
        int u, e, w;
        cin >> u >> e >> w;
        addEdge(u, e, w, adjacencyList);
    }
    printList(adjacencyList, numberOfNodes);
}