#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array, array + size);

    if (size % 2 == 0)
    {
        cout << array[size / 2] << endl;
    }
    else
    {
        cout << (int)(array[(size - 1) / 2] + array[size / 2]) / 2;
    }
}