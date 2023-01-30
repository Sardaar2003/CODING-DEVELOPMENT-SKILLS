#include <stdio.h>
#define max_value 10
int main()
{
    int array1[max_value][max_value];
    int array2[max_value][max_value];
    int row1, column1;
    int temp;
    printf("Enter the dimension of the array :\n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
            // array2[i][j] = array1[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            for (int k = (j + 1); k < column1; k++)
            {
                if (array1[i][j] > array1[i][k])
                {
                    temp = array1[i][j];
                    array1[i][j] = array1[i][k];
                    array1[i][k] = temp;
                }
            }
        }
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
    for (int j = 0; j < column1; j++)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int k = (i + 1); k < row1; k++)
            {
                if (array1[i][j] < array1[k][j])
                {
                    temp = array1[i][j];
                    array1[i][j] = array1[k][j];
                    array1[k][j] = temp;
                }
            }
        }
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
    return 0;
}