#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched : ");
    int element;
    scanf("%d", &element);
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (element == array[i])
        {
            flag = 1;
            printf("The element is found at the index : %d ", i);
            break;
        }
    }
    if (flag == 0)
    {
        printf("The element is not present in the array : %d", element);
    }
    return 0;
}