#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int number, number2;
        cin >> number >> number2;
        if (number == number2)
            cout << number << endl;
        else
            cout << 1 << endl;
    }
}