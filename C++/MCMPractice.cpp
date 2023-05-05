#include <bits/stdc++.h>
using namespace std;

int mcm(vector<int> &dims)
{
    int n = dims.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int len = 2; len < n; len++)
    {
        for (int i = 1; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + dims[i - 1] * dims[k] * dims[j]);
            }
        }
    }
    return dp[1][n - 1];
}

int main()
{
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    vector<int> dims(n + 1);
    cout << "Enter the dimensions of the matrices: ";
    for (int i = 0; i < n + 1; i++)
    {
        cin >> dims[i];
    }
    int ans = mcm(dims);
    cout << "Minimum number of scalar multiplications: " << ans << endl;
    return 0;
}
