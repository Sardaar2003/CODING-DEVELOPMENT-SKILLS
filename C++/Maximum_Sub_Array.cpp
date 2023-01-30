#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sizeOfArray;
    cin >> sizeOfArray;
    int arrayData[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arrayData[i];
    }
    int maxValue = INT_MIN;
    for (int j = 0; j < sizeOfArray; j++)
    {
        int sumData = 0;

        for (int k = j; k < sizeOfArray; k++)
        {
            sumData += arrayData[k];
            if (sumData > maxValue)
            {
                maxValue = sumData;
            }
        }
    }
    cout << maxValue << endl;
}
