#include <stdio.h>
#define max_value 100
int main()
{
    int array1[max_value][max_value];
    int array2[max_value][max_value];
    int row1, column1;
    int row2, column2;
    int flag = 1;
    printf("Enter the dimension of the first matrix : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter the dimension of the second matrix : \n");
    scanf("%d %d", &row2, &column2);
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
    printf("First array : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%3d", array1[i][j]);
        }
        printf("\n");
    }
    printf("Second array : \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%3d", array2[i][j]);
        }
        printf("\n");
    }
    if (row1 == row2 && column1 == column2)
    {
        printf("Comparision can be done");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                if (array1[i][j] != array2[i][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("\nThe two matrix is equal ");
    }
    else
    {
        printf("\nThe two matrix is not equal");
    }
    return 0;
}