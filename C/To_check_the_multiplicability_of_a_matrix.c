#include <stdio.h>
int main()
{
    int row1, column1;
    int row2, column2;
    printf("Enter the dimension of the first matrix : \n");
    scanf("%d %d", &row1, &column1);
    printf("Enter the dimension of the second matrix : \n");
    scanf("%d %d", &row2, &column2);
    if (column1 != row2)
    {
        printf("Multiplication of matrix not possible ");
    }
    else
    {
        printf("Multiplication of matrix is possible");
    }
    return 0;
}