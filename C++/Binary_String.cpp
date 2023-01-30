#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        string Data;
        cin >> Data;
        int ones = 0;
        int zeros = 0;
        for (int j = 0; j < Data.length(); j++)
        {
            if (Data[j] == '0')
            {
                zeros++;
            }
            else
                ones++;
        }
        if (ones % 2 == 0 && zeros % 2 != 0)
        {
            cout << 1 << endl;
        }
        else if (ones % 2 != 0 && zeros % 2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
