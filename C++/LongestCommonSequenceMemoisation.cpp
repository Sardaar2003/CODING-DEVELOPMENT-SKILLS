#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int lowestCommonSequence(string a, string b, int n, int m)
{
    if (n == 0 or m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (a[n - 1] == b[m - 1])
        return dp[n][m] = 1 + lowestCommonSequence(a, b, n - 1, m - 1);
    else
        return dp[n][m] = max(lowestCommonSequence(a, b, n - 1, m), lowestCommonSequence(a, b, n, m - 1));
    return dp[n][m];
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string a, b;
        cin >> a >> b;
        // int dp[a.length() + 1][b.length() + 1];
        memset(dp, -1, sizeof(dp));
        cout << lowestCommonSequence(a, b, a.length(), b.length()) << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 7; j++)
                cout << dp[i][j] << " ";
            cout << endl;
        }
    }
}