#include <bits/stdc++.h>
using namespace std;
void NonRepeating(string t)
{
    vector<int> dp(27, 0);
    for (int i = 0; i < t.length(); i++)
    {
        dp[t[i] - 'a']++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (dp[i] == 1)
        {
            cout << (char)(i + 'a') << endl;
            break;
        }
    }
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string value;
        cin >> value;
        NonRepeating(value);
    }
}