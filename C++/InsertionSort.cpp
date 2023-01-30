#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfElement;
    cin >> numberOfElement;
    int array[numberOfElement];
    for (int i = 0; i < numberOfElement; i++)
    {
        cin >> array[i];
    }
    int j, key;
    for (int i = 1; i < numberOfElement; i++)
    {
        j = i - 1;
        key = array[i];
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    for (int item : array)
    {
        cout << item << " ";
    }
}