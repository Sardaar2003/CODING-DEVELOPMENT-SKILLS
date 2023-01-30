#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int sizeOfArray, floorValue;
        cin >> sizeOfArray >> floorValue;
        int arrayData[sizeOfArray];
        int floor = 0;
        for (int i = 0; i < sizeOfArray; i++)
            cin >> arrayData[i];
        for (int i = 0; i < sizeOfArray; i++)
        {
            if (arrayData[i] > floorValue)
            {
                floor = 1;
                cout << i - 1 << endl;
                break;
            }
        }
        if (floor == 0)
            cout << sizeOfArray << endl;
    }
}
