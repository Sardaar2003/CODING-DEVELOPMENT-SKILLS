#include <stdio.h>
void getminsum(int list[], int n);
int main()
{
    int number;
    printf("Enter the size of the array : \n");
    scanf("%d", &number);
    printf("Enter the elements in the array \n");
    int array[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    getminsum(array, number);
    return 0;
}
void getminsum(int list[], int n)
{
    int sum, min_sum, min_l, min_r;
    min_sum = 0;
    min_l = 0;
    min_r = 1;
    if (n < 2)
    {
        printf("It is invalid");
        return;
    }
    else
    {
        min_sum = list[0] + list[1];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = list[i] + list[j];
                if (abs(min_sum) > abs(sum))
                {
                    min_sum = sum;
                    min_l = i;
                    min_r = j;
                }
            }
        }
    }
    printf("The two elements whose sum is minimum are %d and %d ", list[min_l], list[min_r]);
}