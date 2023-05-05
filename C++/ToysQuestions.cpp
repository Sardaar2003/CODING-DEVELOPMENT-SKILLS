#include <bits/stdc++.h>
using namespace std;

int n, C;
int w[1005], v[1005];
int f[1005];

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n >> C;
        for (int i = 1; i <= n; i++)
        {
            cin >> w[i] >> v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = C; j >= w[i]; j--)
            {
                f[j] = max(f[j], f[j - w[i]] + v[i]);
            }
        }
        cout << f[C] << endl;
    }
    return 0;
}
