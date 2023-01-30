#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int testCases;
    cin >> testCases;
    int maxValue = 0;
    for (int i = 0; i < testCases; i++)
    {
        int number;
        cin >> number;
        for (int j = 1; j <= number; j++)
        {
            for (int k = 1; k <= number; k++)
            {
                int value = (k * j) / gcd(j, k);
                // cout << value << endl;
                if (value > maxValue)
                    maxValue = value;
            }
        }
        cout << maxValue << endl;
    }
    // write your code here

    return 0;
}