#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int MCMMemoisation(int array[], int i, int j)
{
    if (i >= j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++)
    {
        dp[i][j] = min(dp[i][j], (MCMMemoisation(array, i, k) + MCMMemoisation(array, k + 1, j) + (array[i - 1] * array[j] * array[k])));
    }
    return dp[i][j];
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
            cin >> array[i];
        memset(dp, -1, sizeof(dp));
        cout << MCMMemoisation(array, 1, size - 1) << endl;
    }
}