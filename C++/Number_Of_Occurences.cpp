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
        char arrayData[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
            cin >> arrayData[i];
        int count = 0;
        for (char item : arrayData)
        {
            if (item == 'x')
            {
                count++;
            }
        }
        cout << count << endl;
    }
}