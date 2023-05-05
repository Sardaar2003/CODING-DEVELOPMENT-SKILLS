#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size, k;
        cin >> size >> k;
        vector<int> dp(size);
        for (int i = 0; i < size; i++)
            cin >> dp[i];
        vector<int> res;
        for (int i = 0; i < k; i++)
            for (int j = 0; j < size; j++)
                res.push_back(dp[j]);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        long long int currentSum = 0;
        long long int maxSum = INT_MIN;
        for (int i = 0; i < res.size(); i++)
        {
            currentSum += res[i];
            maxSum = max(maxSum, currentSum);
            if (currentSum < 0)
                currentSum = 0;
        }
        cout << maxSum << endl;
    }
}