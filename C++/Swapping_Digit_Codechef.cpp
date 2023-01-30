#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, n, a1, a2, b1, b2;

        cin >> m >> n;

        int max1 = m + n;

        a1 = m / 10;
        a2 = m % 10;

        b1 = n / 10;
        b2 = n % 10;

        if (a1 != 0 && b1 != 0)
        {
            int sum1 = 0, sum2 = 0, sum3 = 0;

            sum1 = (a1 + a2) * 10 + (b1 + b2);
            sum2 = (a1 + b1) * 10 + (a2 + b2);
            sum3 = (b1 + b2) * 10 + (a1 + a2);

            if (max1 < max(sum1, sum2))
            {
                max1 = max(sum1, sum2);
            }
            if (max1 < sum3)
            {
                max1 = sum3;
            }
        }
        else if (a1 != 0 && b1 == 0)
        {
            int x = a1 * 10 + b2 + a2;

            int y = b2 * 10 + a2 + a1;

            if (max1 < y)
                max1 = y;
            if (max1 < x)
                max1 = x;
        }
        else if (a1 == 0 and b1 != 0)
        {

            int x = a2 * 10 + b2 + b1;

            int y = b1 * 10 + a2 + b2;

            if (max1 < y)
                max1 = y;
            if (max1 < x)
                max1 = x;
        }

        cout << max1 << endl;
    }
}
