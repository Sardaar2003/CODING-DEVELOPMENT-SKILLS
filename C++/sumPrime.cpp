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
    int i = 0;
    long long sum = 0;
    while (i != n)
    {
        for (int i = 2; i <= sizedata; i++)
        {
            bool flag = true;

            int value = i;
            while (value > 0)
            {
                int remainder = value % 10;
                if (isPrime[remainder] && remainder % 2 == 1 && remainder != 1)
                {
                    flag = false;
                    break;
                }
                value /= 10;
            }
            if (flag == true)
            {
                sum += value;
                i++;
            }
        }
    }

    return sum;
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