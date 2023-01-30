#include <bits/stdc++.h>
using namespace std;
int foo(int p, int q)

{

    if (p % q == 0)

        return q;

    else

        return foo(q, p % q);
}
int main()
{
    cout << foo(4, 8) << endl;
}