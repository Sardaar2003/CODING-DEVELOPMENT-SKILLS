#include <stdio.h>
#define max_value 100
int main()
{
    int array1[max_value][max_value];
    int array2[max_value][max_value];
    int add[max_value][max_value];
    int subs[max_value][max_value];
    int row1, column1;
    int row2, column2;
    int trace1 = 0;
    int trace2 = 0;
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
    if (column1 == row2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                add[i][j] = array1[i][j] + array2[i][j];
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                subs[i][j] = array1[i][j] - array2[i][j];
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if (i == j)
                {
                    trace1 += array1[i][j];
                }
            }
        }
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                if (i == j)
                {
                    trace2 += array2[i][j];
                }
            }
        }
    }
    printf("The addition result : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%3d", add[i][j]);
        }
        printf("\n");
    }
    printf("The substraction result : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%3d", subs[i][j]);
        }
        printf("\n");
    }
    printf("The result of Trace 1 : %d\n", trace1);
    printf("The result of Trace 2 : %d\n", trace2);

    return 0;
}