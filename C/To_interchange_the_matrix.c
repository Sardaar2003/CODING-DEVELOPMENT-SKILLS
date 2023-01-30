#include <stdio.h>
#define max_value 100
int main()
{
    int array1[max_value][max_value];
    int row1, column1;
    int temp;
    printf("Enter the dimension of the array : \n");
    scanf("%d %d", &row1, &column1);
    if (row1 == column1)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                scanf("%d", &array1[i][j]);
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
        for (int i = 0; i < row1; i++)
        {
            temp = array1[i][i];
            array1[i][i] = array1[i][row1 - i - 1];
            array1[i][row1 - i - 1] = temp;
        }
        printf("After interchanging \n");
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
}