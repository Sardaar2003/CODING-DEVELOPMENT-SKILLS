#include <bits/stdc++.h>
using namespace std;
void fn(int &val, int n)
{
    if (val == n + 1)
        return;
    cout << val << endl;
    val++;
    fn(val, n);
}
int main()
{
    int n;
    cin >> n;
    int val = 1;
    fn(val, n);
    return 0;
}