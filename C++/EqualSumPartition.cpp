#include <bits/stdc++.h>
using namespace std;
bool sumSubset(int array[], int size, int sum)
{
    int dp[size + 1][sum + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < size + 1; i++)
        dp[i][0] = 1;
    for (int i = 1; i < sum + 1; i++)
        dp[0][i] = 0;
    for (int i = 1; i < size + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (array[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j - array[i - 1]] or dp[i - 1][j];
        }
    }
    return dp[size][sum];
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
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += array[i];
        // cout << sum << endl;
        if (sum % 2 == 1)
            cout << "No" << endl;
        else
        {
            if (sumSubset(array, size, sum / 2))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}