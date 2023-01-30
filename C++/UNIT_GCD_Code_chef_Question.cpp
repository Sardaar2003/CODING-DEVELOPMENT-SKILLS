#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 3)
        {
            cout << "1\n";
            cout << n << " ";
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }

        else
        {
            int day = n / 2;
            if (n % 2 == 0)
            {
                cout << day << "\n";
                for (int i = 1; i <= n; i += 2)
                {
                    cout << "2 " << i << " " << i + 1 << "\n";
                }
            }
            else
            {
                cout << day << "\n";
                cout << "3 1 2 3"
                     << "\n";
                for (int i = 4; i <= n; i += 2)
                {
                    cout << "2 " << i << " " << i + 1 << "\n";
                }
            }
        }
    }
}