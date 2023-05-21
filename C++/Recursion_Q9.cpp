#include <bits/stdc++.h>
using namespace std;
void printSub(int i, vector<int> &data, int n, vector<int> &newD)
{
    if (i >= n)
    {
        for (int i = 0; i < newD.size(); i++)
            cout << newD[i] << " ";
        cout << endl;
        return;
    }
    newD.push_back(data[i]);
    printSub(i + 1, data, n, newD);
    newD.pop_back();
    printSub(i + 1, data, n, newD);
}
int main()
{
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
        cin >> data[i];
    vector<int> newD;
    printSub(0, data, n, newD);
}