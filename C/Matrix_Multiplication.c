#include <stdio.h>
#define max_value 100
int main()
{
    int array1[max_value][max_value];
    int array2[max_value][max_value];
    int array3[max_value][max_value];
    int row1;
    int column1;
    int row2;
    int column2;
    printf("Enter the number of rows and column of the first matrix : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter the number of rows and column of the second matrix :\n");
    scanf("%d %d", &row2, &column2);
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
    int sum = 0;
    if (column1 == row2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                for (int k = 0; k < row2; k++)
                {
                    sum += array1[i][k] * array2[k][j];
                }
                array3[i][j] = sum;
                sum = 0;
            }
        }
    }
    else
    {
        printf("Multiplication Cannot be done");
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%3d", array3[i][j]);
        }
        printf("\n");
    }
    return 0;
}