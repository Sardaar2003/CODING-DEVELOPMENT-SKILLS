#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &data, int i, int n)
{
    if (i >= n / 2)
    {
        // cout << data << endl;
        return;
    }
    swap(data[i], data[n - i - 1]);
    reverse(data, i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
        cin >> data[i];
    reverse(data, 0, n);
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
}