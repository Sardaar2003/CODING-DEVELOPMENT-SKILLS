#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<vector<int>> result;
    for (int i = 0; i < size; i++)
    {
        int start, end;
        cin >> start >> end;
        result.push_back({start, end});
    }
    sort(result.begin(), result.end(), [&](vector<int> &a, vector<int> &b)
         { return a[1] < b[1]; });
    int take = 1;
    int end = result[0][1];
    for (int i = 1; i < size; i++)
    {
        if (result[i][0] >= end)
        {
            take += 1;
            end = result[i][1];
        }
    }
    cout << take << endl;
}