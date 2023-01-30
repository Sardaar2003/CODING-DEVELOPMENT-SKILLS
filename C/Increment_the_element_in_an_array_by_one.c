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
    printf("Incremented Array \n");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array[i] + 1);
    }
    return 0;
}