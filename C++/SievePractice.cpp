#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<bool> dp(num + 1, true);
    for (int i = 2; i <= num; i++)
    {
        for (int j = i * i; j <= num; j += i)
        {
            if (dp[i] == true)
            {
                dp[j] = false;
            }
        }
    }
    vector<int> result;
    for (int i = 2; i <= num; i++)
    {
        if (dp[i] == true)
            result.push_back(i);
    }
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
}