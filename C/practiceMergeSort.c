#include <stdio.h>
void merge(int array[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = array[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = array[mid + 1 + i];
    }
    int i = 0;
    int k = 0;
    int finaldata[right];
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            finaldata[k] = left[i];
            i++;
        }
        else
        {
            finaldata[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = array[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = array[j];
        j++;
        k++;
    }
}
void mergeSort(int array[], int left, int right)
{
    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merge(array, left, mid, right);
}
int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    mergeSort(array, 0, size - 1);
}