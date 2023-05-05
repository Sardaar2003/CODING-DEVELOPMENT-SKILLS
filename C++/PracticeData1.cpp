#include <bits/stdc++.h>
using namespace std;
long long int largestPrimeNumbers(int n)
{
    // vector<bool> dp(n + 1, true);
    // for (int i = 2; i <= n + 1; i++)
    // {
    //     for (int j = i * i; j <= n + 1; j += i)
    //     {
    //         if (dp[i] == true)
    //         {
    //             dp[j] = false;
    //         }
    //     }
    // }
    // long long int data = 0;
    // for (int i = 2; i <= n + 1; i++)
    // {
    //     if (dp[i] == true)
    //         data = i;
    // }
    // return data;
    long long int data;
    vector<long long int> dp;
    int c = 2;
    while (n > 1)
    {
        if (n % c == 0)
        {
            dp.push_back(c);
            n /= c;
        }
        else
            c++;
    }
    // cout << dp.size() << endl;
    for (int i = 0; i < dp.size(); i++)
    {
        cout << dp[i] << " ";
    }
    return *max_element(dp.begin(), dp.end());
}
int main()
{
    int n;
    cin >> n;
    cout << largestPrimeNumbers(n) << endl;
}