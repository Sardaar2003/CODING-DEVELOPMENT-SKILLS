#include <stdio.h>
#define max_value 10
int main()
{
    int array1[max_value][max_value];
    int row1, column1;
    int sum_row = 0;
    int sum_column = 0;
    printf("Enter the dimension of the matrix :\n");
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
        for (int j = 0; j < column1; j++)
        {
            sum_row += array1[i][j];
        }
        printf("The sum of %d row : %d\n", i, sum_row);
        sum_row = 0;
    }
    for (int j = 0; j < column1; j++)
    {
        for (int i = 0; i < row1; i++)
        {
            sum_column += array1[i][j];
        }
        printf("The sum of %d column : %d\n", j, sum_column);
        sum_row = 0;
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%3d", array1[i][j]);
        }
        printf("\n");
    }
    // printf("The sum of the row : %d \n", sum_row);
    // printf("The sum of the column : %d", sum_column);
}