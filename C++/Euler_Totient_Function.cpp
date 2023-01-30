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
    int numberOfElements;
    int count = 1;
    cin >> numberOfElements;
    for (int i = 2; i < numberOfElements; i++)
    {
        int value = gcd(i, numberOfElements);
        if (value == 1)
        {
            count++;
        }
    }
    cout << count << endl;
}