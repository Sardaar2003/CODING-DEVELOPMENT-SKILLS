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
    int sum = 0;
    int average;
    for (int i = 0; i < number; i++)
    {
        sum += array[i];
    }
    printf("The Sum of all the elements : %d\n", sum);
    printf("The Averge of the elements in the array : %.2f", (float)sum / number);
    return 0;
}