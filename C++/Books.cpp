#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sizeOfArray, kthValue;
    cin >> sizeOfArray >> kthValue;
    int arrayData[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
        cin >> arrayData[i];
    int sum = 0;
    int value = 0;
    int i = 0;
    while (sum < kthValue)
    {
        sum += arrayData[i];
        value += 1;
        i += 1;
    }
    cout << value - 1 << endl;
}