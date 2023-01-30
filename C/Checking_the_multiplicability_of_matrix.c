#include <stdio.h>
int main()
{
    int row_1, row_2, column_1, column_2;
    printf("Enter the rows and columns for the first matrix : \n");
    scanf("%d %d", &row_1, &column_1);
    printf("Enter the rows and columns for the second matrix : \n");
    scanf("%d %d", &row_2, &column_2);
    if (column_1 != row_2)
    {
        printf("The multiplication cannot take place \n");
    }
    else
    {
        printf("The multiplication will take place and in the order of %d %d", row_1, column_2);
    }
    return 0;
}