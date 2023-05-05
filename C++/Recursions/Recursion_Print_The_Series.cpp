#include <bits/stdc++.h>
using namespace std;
void fn(int n, int k, vector<int> &dp)
{
    if (n < 0)
    {
        dp.push_back(n);
        n = n + k;
        return;
    }
    dp.push_back(n);
    fn(n - k, k, dp);
    dp.push_back(n);
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> dp;
    fn(n, k, dp);
    for (int i = 0; i < dp.size(); i++)
        cout << dp[i] << " ";
    return 0;
}