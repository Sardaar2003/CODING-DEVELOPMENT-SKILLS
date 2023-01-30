#include <bits/stdc++.h>
using namespace std;
int ExtendedGCD(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int result = ExtendedGCD(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return result;
}
int main()
{
    int a = 56, b = 21;
    int x = 0, y = 0;
    int result = ExtendedGCD(a, b, &x, &y);
    cout << result << " " << x << " " << y << " " << endl;
}