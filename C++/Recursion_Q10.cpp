#include <bits/stdc++.h>
using namespace std;
void printSubk(int i, vector<int> &data, int n, int k, vector<int> &newD)
{
    if (i >= n)
    {
        if (accumulate(newD.begin(), newD.end(), 0) == k)
        {
            for (auto it : newD)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    newD.push_back(data[i]);
    printSubk(i + 1, data, n, k, newD);
    newD.pop_back();
    printSubk(i + 1, data, n, k, newD);
}
int main()
{
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
        cin >> data[i];
    int k;
    cin >> k;
    vector<int> newD;
    printSubk(0, data, n, k, newD);
    return 0;
}