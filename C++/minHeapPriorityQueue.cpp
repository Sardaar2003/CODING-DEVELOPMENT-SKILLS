#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        priority_queue<int, vector<int>, greater<int>> q;
        int size;
        cin >> size;
        int element;
        for (int i = 0; i < size; i++)
        {
            cin >> element;
            q.push(element);
        }
        while (!q.empty())
        {
            cout << q.top() << " ";
            q.pop();
        }
        cout << endl;
    }
}