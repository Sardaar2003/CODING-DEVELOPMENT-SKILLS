#include <stdio.h>
#include <math.h>
#define max_value 10
int main()
{
    int array1[max_value][max_value];
    int row1, column1;
    int sum_1 = 0;
    int trace = 0;
    float normal = 0;
    int value = 0;
    printf("Enter the dimension of the array : \n");
    scanf("%d %d", &row1, &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &array1[i][j]);
            value = array1[i][j] * array1[i][j];
            sum_1 += value;
        }
    }
    normal = sqrt(sum_1);
    printf("The normal of the matrix : %.2f\n", normal);
    for (int i = 0; i < row1; i++)
    {
        trace += array1[i][i];
    }
    printf("The trace of the matrix : %d", trace);
}