#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sizeOfArray;
    cin >> sizeOfArray;
    int arrayData[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
        cin >> arrayData[i];
    int value;
    cin >> value;
    int count = 0;
    int number = arrayData[0];
    sort(arrayData, arrayData + sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (number == arrayData[i])
        {
            count += 1;
        }
        if (count == value)
            break;
        else if (number != arrayData[i])
        {
            number = arrayData[i];
            count = 1;
        }
    }
    cout << number << endl;
}