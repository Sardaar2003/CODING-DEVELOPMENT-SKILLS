#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const int N = 1005;

int dp[N][N];
string a, b;
vector<string> ans;

void backtrack(int i, int j, string curr)
{
    if (i == 0 || j == 0)
    {
        if (curr.length() > 0)
        {
            ans.push_back(curr);
        }
        return;
    }

    if (a[i - 1] == b[j - 1])
    {
        backtrack(i - 1, j - 1, a[i - 1] + curr);
    }
    else
    {
        if (dp[i - 1][j] > dp[i][j - 1])
        {
            backtrack(i - 1, j, curr);
        }
        else if (dp[i - 1][j] < dp[i][j - 1])
        {
            backtrack(i, j - 1, curr);
        }
        else
        {
            backtrack(i - 1, j, curr);
            backtrack(i, j - 1, curr);
        }
    }
}

int main()
{
    cin >> a >> b;
    int n = a.length(), m = b.length();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    backtrack(n, m, "");
    if (ans.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
