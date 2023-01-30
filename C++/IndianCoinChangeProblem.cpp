#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> data(size);
    for (int i = 0; i < size; i++)
        cin >> data[i];
    sort(data.begin(), data.end(), greater<int>());
    int ans = 0;
    int amt;
    cin >> amt;
    for (int i = 0; i < size; i++)
    {
        ans += amt / data[i];
        amt -= amt / data[i] * data[i];
    }
    cout << ans << endl;
}