#include <bits/stdc++.h>
using namespace std;
int MCM(vector<int> &data, int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int minimum = INT_MAX;
    int count;
    for (k = i; k < j; k++)
    {
        count = MCM(data, i, k) + MCM(data, k + 1, j) + data[i - 1] * data[j] * data[k];
        minimum = min(minimum, count);
    }
    return minimum;
}
int main()
{
    int size;
    cin >> size;
    vector<int> data;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        data.push_back(element);
    }
    cout << MCM(data, 1, size - 1) << endl;
}
