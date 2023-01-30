#include <stdio.h>
#define max_value 100
int main()
{
    int array1[max_value][max_value];
    int row1, column1;
    printf("Enter the dimension of the first matrix : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    printf("The Matrix is : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%3d", array1[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the matrix : \n");
    for (int i = 0; i < column1; i++)
    {
        for (int j = 0; j < row1; j++)
        {
            printf("%3d", array1[j][i]);
        }
        printf("\n");
    }
}