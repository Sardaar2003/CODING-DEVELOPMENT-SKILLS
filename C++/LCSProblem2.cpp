#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const int N = 1005;

int dp[N][N];
string a, b;

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

    cout << dp[n][m] << endl;
    return 0;
}
