#include <stdio.h>
#define max_value 100
int main()
{
    int array[max_value];
    int size;
    int *ptr;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Printing the given array using pointers : \n");
    ptr = &array;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}