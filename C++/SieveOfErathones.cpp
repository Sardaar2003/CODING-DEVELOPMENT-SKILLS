#include <bits/stdc++.h>
using namespace std;
#define sizedata 1000005
long long sieveErath(int n)
{
    // long long sizedata = 5 * n * n;
    vector<long long> result;
    bool isPrime[sizedata];
    memset(isPrime, true, sizeof(isPrime));
    for (long long i = 2; i <= sizedata; i++)
    {
        if (isPrime[i] == true)
        {
            for (long long j = i * i; j <= sizedata; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (long long i = 2; i <= sizedata; i++)
    {
        if (isPrime[i])
            result.push_back(i);
    }
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }

    return result[n - 1];
    // return *result.end();
}
int main()
{
    long long testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long n;
        cin >> n;
        cout << sieveErath(n) << endl;
    }
}