#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int size;
    cin >> size;
    long long int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    for (int i = 1; i < size; i++)
    {
        long long int key = array[i];
        long long int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = key;
    }
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}