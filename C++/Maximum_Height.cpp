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
        // sort(arrayData, arrayData + sizeOfArray);
        int maxSize = arrayData[0];
        int index = 1;
        for (int i = 1; i < sizeOfArray; i++)
        {
            if (arrayData[i] > maxSize)
            {
                index++;
            }
        }
        cout << index << endl;
    }
}