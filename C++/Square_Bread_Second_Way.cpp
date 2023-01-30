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
        int gcdValue = gcd(length, breadth);
        length /= gcdValue;
        breadth /= gcdValue;
        // cout << length << " " << breadth << endl;
        // length /= gcd(length, breadth);
        // breadth /= gcd(length, breadth);
        cout << length * breadth << endl;
    }
}