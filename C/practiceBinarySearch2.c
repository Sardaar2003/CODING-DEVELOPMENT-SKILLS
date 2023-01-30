#include <stdio.h>
int BinarySearch(int array[], int left, int right, int element)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (array[mid] == element)
            return mid;
        else if (element > array[mid])
            return BinarySearch(array, mid + 1, right, element);
        else
        {
            return BinarySearch(array, left, mid - 1, element);
        }
    }
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
    int element;
    printf("Enter the number to be searched : ");
    scanf("%d", &element);
    int index = BinarySearch(array, 0, size, element);
    if (index != size)
    {
        printf("The element is present at index : %d ", index);
    }
    else
    {
        printf("The element is not present in the array : ");
    }
}