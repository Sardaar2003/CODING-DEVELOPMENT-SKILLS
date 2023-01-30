#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int number;
        cin >> number;
        if (number == 1)
            cout << 2 << endl;
        else
            cout << 3 + (number - 1) * 2 << endl;
    }
    return 0;
}