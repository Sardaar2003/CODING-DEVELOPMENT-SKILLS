#include <stdio.h>
#define max_value 100
int main()
{
    int array[max_value];
    int number;
    int *ptr;
    printf("Enter the size of the array : \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    ptr = array;
    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("The sum of all the elements in the array : %d", sum);
}