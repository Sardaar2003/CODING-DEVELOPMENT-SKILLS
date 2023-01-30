#include <stdio.h>

void Read_Matrix(int arr[][10], int m, int n);
void Print_Matrix(int arr[][10], int m, int n);
void Product_Matrix(int arr[][10], int array2[][10], int array3[][10], int m, int n);
void main()
{
    int matrix_1[10][10], matrix_2[10][10], matrix_3[10][10];
    int m, n;
    printf("Enter the value of m and n : \n");
    scanf("%d %d", &n, &m);
    printf("Enter the value of matrix - 1 value \n");
    Read_Matrix(matrix_1, m, n);
    printf("Enter the value of matrix -2 values \n");
    Read_Matrix(matrix_2, m, n);
    Product_Matrix(matrix_1, matrix_2, matrix_3, m, n);
    printf("The resultant of the product of the two matrix : \n");
    Print_Matrix(matrix_3, m, n);
}
void Read_Matrix(int arr[][10], int m, int n)
{
    int i, j;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void Print_Matrix(int arr[][10], int m, int n)
{
    int i, j;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
void Product_Matrix(int arr[][10], int arr2[][10], int arr3[][10], int m, int n)
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr3[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
}