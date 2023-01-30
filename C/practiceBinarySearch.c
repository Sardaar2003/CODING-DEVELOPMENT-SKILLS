#include <stdio.h>
int BinarySearch(int array[], int left, int right, int element)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        else if (array[mid] < element)
        {
            return BinarySearch(array, left, mid - 1, element);
        }
        else
        {
            return BinarySearch(array, mid + 1, right, element);
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
    printf("Enter the element to be searched : ");
    scanf("%d", &element);
    printf("%d", BinarySearch(array, 0, size, element));
}