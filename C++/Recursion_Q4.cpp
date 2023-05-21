#include <bits/stdc++.h>
using namespace std;
void fn(int n, int sum)
{
    if (n < 0)
    {
        cout << sum << endl;
        return;
    }
    fn(n - 1, sum + n);
}
int main()
{
    int n;
    cin >> n;
    fn(n, 0);
    return 0;
}