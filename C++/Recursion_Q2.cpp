#include <bits/stdc++.h>
using namespace std;
void fn(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    i += 1;
    fn(i, n);
}
int main()
{
    int n;
    cin >> n;
    fn(1, n);
    return 0;
}