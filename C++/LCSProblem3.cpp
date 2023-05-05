#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const int N = 1005;

int dp[N][N];
string a, b;

int lcs(int i, int j)
{
    if (i == 0 || j == 0)
        return 0;
    if (a[i - 1] == b[j - 1])
    {
        return lcs(i - 1, j - 1) + 1;
    }
    else
    {
        return max(lcs(i, j - 1), lcs(i - 1, j));
    }
}

int main()
{
    cin >> a >> b;
    int n = a.length(), m = b.length();
    cout << lcs(n, m) << endl;
    return 0;
}
