#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int size;
    cin >> size;
    vector<int> data(size);
    for (int i = 0; i < size; i++)
        cin >> data[i];
    sort(data.begin(), data.end());
    long long max = 0, min = 0;
    for (int i = 0; i < size / 2; i++)
    {
        max += (data[i + (size / 2)] - data[i]);
        min += (data[2 * i + 1] - data[2 * i]);
    }
    cout << max << " " << min << endl;
}