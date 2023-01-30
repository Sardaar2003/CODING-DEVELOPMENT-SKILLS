#include <bits/stdc++.h>
using namespace std;
void mergeData(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftar[n1], rightar[n2];
    for (int i = 0; i < n1; i++)
        leftar[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightar[j] = arr[j + mid + 1];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (leftar[i] <= rightar[j])
        {
            arr[k] = leftar[i];
            i++;
        }
        else
        {
            arr[k] = rightar[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = leftar[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = rightar[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + (right - left)) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        mergeData(arr, left, mid, right);
    }
}
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    mergeSort(array, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}