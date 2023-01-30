#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int size;
    cin >> size;
    vector<int> data(size);
    for (int i = 0; i < size; i++)
        cin >> data[i];
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < size; i++)
        minHeap.push(data[i]);
    int ans = 0;
    while (minHeap.size() != 1)
    {
        int a1 = minHeap.top();
        minHeap.pop();
        int a2 = minHeap.top();
        minHeap.pop();
        ans += (a1 + a2);
        minHeap.push(a1 + a2);
    }
    cout << ans << endl;
    return 0;
}