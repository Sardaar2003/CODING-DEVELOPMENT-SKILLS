#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int i = 1;
    int count = 0;
    int sum = 0;
    while (i <= n && sum <= 240 - k)
    {
        // cout << i << " ";
        sum += 5 * i;
        if (sum > 240 - k)
        {
            break;
        }
        i++;
        count++;
        // cout << sum << endl;
    }
    cout << count << endl;
}