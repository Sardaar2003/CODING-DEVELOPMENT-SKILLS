#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[], int size)
{
    int i, j, key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
        for (int k = 0; k < size; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    InsertionSort(array, size);
    for (int chard : array)
        cout << chard << " ";
}