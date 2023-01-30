#include <bits/stdc++.h>
using namespace std;
bool primeNumber(int value)
{
    if (value == 0 || value == 1)
        return false;
    else
    {
        for (int j = 2; j <= sqrt(value); j++)
        {
            if (value % j == 0)
                return false;
        }
        return true;
    }
}
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int value;
        cin >> value;
        if (primeNumber(value))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}