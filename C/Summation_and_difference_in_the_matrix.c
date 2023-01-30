#include <stdio.h>
#define max_value 100
int main()
{
    int array1[max_value][max_value];
    int array2[max_value][max_value];
    int addition[max_value][max_value];
    int substraction[max_value][max_value];
    int row1, column1;
    int row2, column2;
    printf("Enter the dimesion of the first matrix : \n");
    scanf("%d %d ", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter the dimesion of the second matrix : \n");
    scanf("%d %d ", &row2, &column2);
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            addition[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            substraction[i][j] = array1[i][j] - array2[i][j];
        }
    }
    printf("The summation of two matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%3d ", addition[i][j]);
        }
        printf("\n");
    }
    printf("\n The difference of two matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%3d ", substraction[i][j]);
        }
        printf("\n");
    }
    return 0;
}