#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const int N = 1005;

int dp[N][N];
string a, b;
vector<char> lcs_sequence;

void lcs(int i, int j)
{
    if (i == 0 || j == 0)
        return;
    if (a[i - 1] == b[j - 1])
    {
        lcs_sequence.push_back(a[i - 1]);
        lcs(i - 1, j - 1);
    }
    else
    {
        if (dp[i - 1][j] > dp[i][j - 1])
        {
            lcs(i - 1, j);
        }
        else
        {
            lcs(i, j - 1);
        }
    }
}

int main()
{
    cin >> a >> b;
    int n = a.length(), m = b.length();
    memset(dp, 0, sizeof(dp));
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
    cout << dp[n][m] << endl;
    lcs(n, m);
    reverse(lcs_sequence.begin(), lcs_sequence.end());
    for (char c : lcs_sequence)
        cout << c;
    cout << endl;
    return 0;
}
