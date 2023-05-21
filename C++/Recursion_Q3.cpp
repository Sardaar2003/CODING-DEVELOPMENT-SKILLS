#include <bits/stdc++.h>
using namespace std;
void fn(int n)
{
    if (n < 0)
        return;
    cout << n << endl;
    n -= 1;
    fn(n);
}
int main()
{
    int n;
    cin >> n;
    fn(n);
    return 0;
}