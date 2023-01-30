#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int length, breadth;
        cin >> length >> breadth;
        int i = 2;
        while (length != 1 && breadth != 1 && i <= length && i <= breadth)
        {
            if (length % i == 0 && breadth % i == 0)
            {
                length /= i;
                breadth /= i;
            }
            else
            {
                i++;
            }
        }
        cout << length * breadth << endl;
        // cout << gcd(length, breadth) << endl;
    }
}