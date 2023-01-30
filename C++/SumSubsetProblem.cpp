#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size, sum;
        cin >> size >> sum;
        int array[size];
        for (int i = 0; i < size; i++)
            cin >> array[i];
        // int sum;
        // cin >> sum;
        int dp[size + 1][sum + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < size + 1; i++)
        {
            dp[i][0] = 1;
        }
        for (int j = 1; j < sum + 1; j++)
            dp[0][j] = 0;
        for (int i = 1; i < size + 1; i++)
        {
            for (int j = 1; j < sum + 1; j++)
            {
                if (array[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j - array[i - 1]] || dp[i - 1][j];
            }
        }
        if (dp[size][sum] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        for (int i = 0; i < size + 1; i++)
        {
            for (int j = 0; j < sum + 1; j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
    }
}