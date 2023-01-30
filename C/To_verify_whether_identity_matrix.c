#include <stdio.h>
#define max_value 10
int main()
{
    int array[max_value][max_value];
    int row1, column1;
    int flag = 0;
    printf("Enter the dimension of the array : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            if (i == j && array[i][j] != 1)
            {
                flag = -1;
                break;
            }
            else if (i != j && array[i][j] != 0)
            {
                flag = -1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("The given matrix is an identity matrix ");
    }
    else
    {
        printf("The given matrix is not an identity matrix ");
    }
    return 0;
}