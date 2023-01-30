#include <bits/stdc++.h>
using namespace std;
int lowestCommonSequence(string a, string b, int n, int m)
{
    if (n == 0 || m == 0)
        return 0;
    if (a[n - 1] == b[m - 1])
        return 1 + lowestCommonSequence(a, b, n - 1, m - 1);
    else
        return max(lowestCommonSequence(a, b, n - 1, m), lowestCommonSequence(a, b, n, m - 1));
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string a, b;
        cin >> a >> b;
        cout << lowestCommonSequence(a, b, a.length(), b.length()) << endl;
    }
}