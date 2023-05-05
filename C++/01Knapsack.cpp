#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int W, vector<int> &wt, vector<int> &val)
{
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= W; w++)
        {
            if (wt[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], val[i - 1] + dp[i - 1][w - wt[i - 1]]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][W];
}

int main()
{
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the maximum weight capacity: ";
    cin >> W;
    vector<int> wt(n), val(n);
    cout << "Enter the weights and values of the items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    int ans = knapsack(n, W, wt, val);
    cout << "Maximum value that can be obtained: " << ans << endl;
    return 0;
}
