#include <stdio.h>
#define max_value 100
int main()
{
    int array[max_value];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements in the array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The result : \n");
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 5 == 0)
        {
            printf("Fiz\n");
        }
        else
        {
            printf("%d\n", array[i]);
        }
    }
    return 0;
}