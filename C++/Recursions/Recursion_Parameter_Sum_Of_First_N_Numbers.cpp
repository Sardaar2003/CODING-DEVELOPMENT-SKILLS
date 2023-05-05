#include <bits/stdc++.h>
using namespace std;
void fn(int i, int n)
{
    if (n == 0)
    {
        cout << i << endl;
        return;
    }
    i += n;
    // n -= 1;
    fn(i, n - 1);
}
int main()
{
    int n;
    cin >> n;
    fn(0, n);
    return 0;
}