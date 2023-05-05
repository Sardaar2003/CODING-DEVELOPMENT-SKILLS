#include <bits/stdc++.h>
using namespace std;
int dividingCircle(int n)
{
    int c = n / 2;
    int dp[c + 1] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= c; i++)
    {
        int l = 0;
        int r = i - 1;
        while (l <= i - 1)
        {
            dp[i] += dp[l] * dp[r];
            l++;
            r--;
        }
    }
    return dp[c];
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        cout << dividingCircle(n) << endl;
    }
}