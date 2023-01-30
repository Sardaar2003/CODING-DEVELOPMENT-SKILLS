#include <bits/stdc++.h>
using namespace std;
long long count(long long r, long long p, long long q)
{

    if ((p > 0 && p % r == 0) || (p == 0 || q == 0) || (q < 0 && p < 0 && q % r == 0) || (p < 0 && q > 0))
        return (q / r) - (p / r) + 1;
    else
        return (q / r) - (p / r);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long r, p, q;
        cin >> r >> p >> q;
        cout << count(r, p, q) << endl;
    }
}
