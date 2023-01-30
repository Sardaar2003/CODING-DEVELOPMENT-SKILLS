#include <stdio.h>
#define max_value 100
int main()
{
    int array[max_value];
    int array2[max_value];
    int number;
    int number1;

    printf("Enter the size of the array 1 : \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the size of the array 2 : \n");
    scanf("%d", &number1);
    for (int i = 0; i < number1; i++)
    {
        scanf("%d", &array2[i]);
    }
    int i = 0;
    int j = 0;
    int k = 0;
    int array_final[number1];
    while (i < number && j < number1 && number1 == number)
    {
        array_final[k] = array[i] + array2[j];
        i++;
        j++;
        k++;
    }
    printf("Resultant array : \n");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array_final[i]);
    }
    return 0;
}