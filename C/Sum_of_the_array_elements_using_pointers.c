#include <stdio.h>
#define max_value 100
int sum_of_elements(int *ptr, int size);
int main()
{
    int array[max_value];
    int number;
    int sum;
    int *ptr;

    printf("Enter the size of the array : \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    ptr = &array;
    sum = sum_of_elements(ptr, number);
    printf("The sum of the elements in the array : %d", sum);
}
int sum_of_elements(int *ptr, int size)
{
    int sum_data = 0;
    for (int i = 0; i < size; i++)
    {
        sum_data += *(ptr + i);
    }
    return sum_data;
}