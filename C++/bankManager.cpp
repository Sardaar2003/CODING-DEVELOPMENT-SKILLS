#include <bits/stdc++.h>
using namespace std;
int findValue(int n)
{
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            result += i;
            n /= i;
        }
    }
    return result;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        cout << findValue(n) << endl;
    }
}