#include <bits/stdc++.h>
using namespace std;
void reverseArray(int array[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    reverseArray(array, start + 1, end - 1);
}
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    // for (int i = 0; i < size / 2; i++)
    // {
    // int temp = array[i];                             ------ ITERATIVE METHOD
    //     array[i] = array[size - i - 1];
    //     array[size - i - 1] = temp;
    // }
    reverseArray(array, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}