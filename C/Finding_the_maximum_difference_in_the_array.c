#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int max_difference = array[1] - array[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((array[j] - array[i]) > max_difference)
            {
                max_difference = array[j] - array[i];
            }
        }
    }
    printf("The maximum difference in the array : %d", max_difference);
    return 0;
}