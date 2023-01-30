#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> data;
    vector<long long> data2(n);

    stack<long long> dataset;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        data.push_back(ele);
    }
    for (int j = n - 1; j >= 0; j--)
    {
        long long currentValue = data[j];
        while (!dataset.empty() && dataset.top() <= currentValue)
        {
            dataset.pop();
        }
        data2[j] = dataset.empty() ? -1 : dataset.top();
        dataset.push(currentValue);
    }
    for (int i = 0; i < n; i++)
    {
        cout << data2[i] << " ";
    }
}