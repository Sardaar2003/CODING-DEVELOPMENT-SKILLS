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
    for (int i = 0; i < testCases; i++)
    {
        int carBMW, carAudi, maxValue;
        cin >> carBMW >> carAudi >> maxValue;
        int value = (carAudi * carBMW) / gcd(carAudi, carBMW);
        int number = 0;
        int k = 0;
        while (value * k <= maxValue)
        {
            k += 1;
        }
        cout << k - 1 << endl;
    }
}