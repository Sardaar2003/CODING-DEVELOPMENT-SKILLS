#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        int arrayData[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arrayData[i];
        }
        int value = arrayData[0];
        for (int i = 1; i < size; i++)
        {
            value = gcd(value, arrayData[i]);
        }
        int result = 0;
        for (int i = 1; i <= sqrt(value); i++)
        {
            if (value % i == 0)
            {
                if (value / i == i)
                {
                    result++;
                }
                else
                {
                    result += 2;
                }
            }
        }
        cout << result << endl;
    }
}