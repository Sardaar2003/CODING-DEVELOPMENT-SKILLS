#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
{
    if (b == 0)
        return a;
    else
    {
        return GCD(b, a % b);
    }
}
long long reduceData(long long a, string data)
{
    long long mod = 0;
    for (int i = 0; i < data.length(); i++)
    {
        mod = (mod * 10 + data[i] - '0') % a;
    }
    return mod;
}
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        long long value;
        string Data;
        cin >> value;
        cin >> Data;
        cout << GCD(value, reduceData(value, Data)) << endl;
    }
}