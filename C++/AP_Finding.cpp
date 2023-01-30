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
        int arrayData[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
            cin >> arrayData[i];
        int difference = 1000;
        for (int i = 0; i < sizeOfArray - 1; i++)
        {
            if (arrayData[i + 1] - arrayData[i] < difference)
                difference = arrayData[i + 1] - arrayData[i];
        }
        for (int i = 0; i < sizeOfArray; i++)
        {
            int value = arrayData[0] + i * difference;
            if (value != arrayData[i])
            {
                cout << value << endl;
                break;
            }
        }
    }
}