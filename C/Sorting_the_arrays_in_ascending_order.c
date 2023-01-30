#include <stdio.h>
#define max_value 100
int main()
{
    int array[max_value];
    int number;
    printf("Enter the size of the array : \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (array[j] > array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The sorted array in the increasing order : \n");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}