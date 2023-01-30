#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    int array[n];
    int even_array[n];
    int odd_array[n];
    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_array[j] = array[i];
            j++;
        }
        else
        {
            odd_array[k] = array[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", odd_array[i]);
    }
    printf("\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", even_array[i]);
    }
    return 0;
}