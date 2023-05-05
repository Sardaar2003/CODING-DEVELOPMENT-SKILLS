#include <bits/stdc++.h>
using namespace std;

#define ld long long
int main()
{
    ld dp[61];
    dp[0] = dp[1] = 1;
    for (int i = 2; i < 61; i++)
    {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
        {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    int t;
    cin >> t;
    for (; t > 0; t--)
    {
        int n;
        cin >> n;
        n /= 2;
        cout << dp[n] << endl;
    }
    return 0;
}