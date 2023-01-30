#include <bits/stdc++.h>
using namespace std;
void mergeSort(int low, int middle, int high, int array[])
{
    int n1 = middle - low + 1;
    int n2 = high - middle;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = array[i + low];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = array[middle + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }
    while (i != n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }
    while (j != n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}
void merge(int left, int right, int array[])
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        merge(left, middle, array);
        merge(middle + 1, right, array);
        mergeSort(left, middle, right, array);
    }
}
int main()
{
    int numberOfElements;
    cin >> numberOfElements;
    int array[numberOfElements];
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> array[i];
    }
    merge(0, numberOfElements - 1, array);
    for (int item : array)
    {
        cout << item << " ";
    }
}