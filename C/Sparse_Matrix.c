#include <stdio.h>
#define max_value 100
int main()
{
    int array_1[max_value][max_value];
    int row1, column1;
    int counter = 0;
    printf("Enter the dimension of the array : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array_1[i][j]);
            if (array_1[i][j] == 0)
            {
                counter++;
            }
        }
    }
    if (counter > (row1 * column1) / 2)
    {
        printf("The given matrix is a sparse matrix");
    }
    else
    {
        printf("The given matrix is not a sparse matrix");
    }
    printf("\n There are %d number of zeros", counter);
    return 0;
}