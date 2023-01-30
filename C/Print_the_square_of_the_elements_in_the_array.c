#include <stdio.h>
int main()
{
    int number, number1;
    printf("Enter the size of the matrix : \n");
    scanf("%d %d", &number, &number1);
    int array[number][number1];
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; i < number1; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("%d ", array[i][j] * array[i][j]);
        }
    }
    return 0;
}