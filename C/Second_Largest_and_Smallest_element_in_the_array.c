#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array :\n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The second largest element in the array : %d\n", array[9]);
    printf("The smallest element in the array : %d", array[0]);
}