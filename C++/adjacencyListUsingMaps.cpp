#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
class Graph
{
public:
    unordered_map<int, list<int>> adjacencyList;
    void addEdge(int u, int v, int direction)
    {
        adjacencyList[u].push_back(v);
        if (direction == 0)
        {
            adjacencyList[v].push_back(u);
        }
    }
    void printList()
    {
        for (auto item : adjacencyList)
        {
            cout << item->first << " -->";
            for (auto element : item->second)
            {
                cout << element << " ";
            }
            cout << endl;
        }
    }
}