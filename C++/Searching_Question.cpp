#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int sizeOfArray;
        cin >> sizeOfArray;
        int final = 0;
        int arrayData[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
            cin >> arrayData[i];
        for (int i = 0; i < sizeOfArray; i++)
        {
            if (arrayData[i] == 1)
            {
                final = 1;
                cout << i << endl;
                break;
            }
        }
        if (final == 0)
            cout << -1 << endl;
    }
}