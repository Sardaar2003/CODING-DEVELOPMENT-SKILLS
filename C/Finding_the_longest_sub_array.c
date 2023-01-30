#include <stdio.h>
#define max_value 100
int main()
{
    int array[max_value];
    int number;
    printf("Enter the size of the array : \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    int largest = array[0];
    int sum = 0;
    int mleft = 0;
    int mright = 1;
    for (int i = 0; i < number; i++)
    {
        int sum = 0;
        for (int j = i; j < number; j++)
        {
            sum += array[j];
            if (sum > largest)
            {
                largest = sum;
                mleft = i;
                mright = j;
            }
        }
    }
    for (int i = mleft; i < mright; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}