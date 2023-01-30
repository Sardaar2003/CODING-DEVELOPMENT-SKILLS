#include <stdio.h>
#define max_value 10
int main()
{
    int array1[max_value][max_value], array2[max_value][max_value];
    int row1, column1;
    int rows_inter_1, rows_inter_2;
    int colm_inter_1, colm_inter_2;
    int temp;
    printf("Enter the dimension of the array : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }
    printf("Enter the row to be interchanged \n");
    scanf("%d %d", &rows_inter_1, &rows_inter_2);
    for (int i = 0; i < row1; i++)
    {
        temp = array1[rows_inter_1 - 1][i];
        array1[rows_inter_1 - 1][i] = array1[rows_inter_2 - 1][i];
        array1[rows_inter_2 - 1][i] = temp;
    }
    printf("Enter the column to be interchanged \n");
    scanf("%d %d", &colm_inter_1, &colm_inter_2);
    for (int i = 0; i < column1; i++)
    {
        temp = array2[i][colm_inter_1 - 1];
        array2[i][colm_inter_1 - 1] = array2[i][colm_inter_2 - 1];
        array2[i][colm_inter_2 - 1] = temp;
    }
    printf("The change in row matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%3d", array1[i][j]);
        }
        printf("\n");
    }
    printf("The change in the column matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%3d", array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}