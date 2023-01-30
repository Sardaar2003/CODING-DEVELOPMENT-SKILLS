#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length();
        int m = b.length();
        int dp[n + 1][m + 1];
        for (int i = 0; i < n + 1; i++)
            dp[i][0] = 0;
        for (int i = 0; i < m + 1; i++)
            dp[0][i] = 0;
        int result = 0;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    result = max(result, dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        cout << result << endl;
    }
}