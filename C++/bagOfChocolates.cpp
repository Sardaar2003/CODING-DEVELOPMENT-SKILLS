#include <bits/stdc++.h>
using namespace std;
long long valueData(long long n, long long k)
{
    if (n == 0)
    {
        return k;
    }
    else
    {
        return (valueData(n - 1, k)) % (1000006);
    }
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long n, k;
        cin >> n >> k;
        cout << (n * valueData(n, k)) % (1000006) << endl;
    }
    return 0;
}