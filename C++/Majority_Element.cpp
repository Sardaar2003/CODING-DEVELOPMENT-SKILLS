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
        for (int j = 0; j < sizeOfArray; j++)
        {
            cin >> arrayData[i];
        }
        int elements;
        int count = 0;
        for (int i = 0; i < sizeOfArray; i++)
        {
            if (count == 0)
                elements = arrayData[i];
            if (elements == arrayData[i])
                count++;
            else
                count--;
        }
        cout << elements << endl;
        // int value = count(arrayData, arrayData + sizeOfArray, elements);
        // if (value > (sizeOfArray / 2))
        // {
        //     cout << elements << endl;
        // }
        // else
        //     cout << -1 << endl;
    }
}