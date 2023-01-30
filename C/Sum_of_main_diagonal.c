#include <stdio.h>
#define max_value 10
int main()
{
    int array1[max_value][max_value];
    int row1, column1;
    int sum_of_diagonal = 0;
    int sum_of_non_diagonal = 0;
    printf("Enter the dimension of the array : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    for (int i = 0; i < row1; i++)
    {
        sum_of_diagonal += array1[i][i];
        sum_of_non_diagonal += array1[i][row1 - i - 1];
    }
    printf("The array : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%3d", array1[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all the diagonal elements : %d\n", sum_of_diagonal);
    printf("Sum of all non diagonal element : %d", sum_of_non_diagonal);
}