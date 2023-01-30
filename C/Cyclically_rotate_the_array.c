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
    array[n] = array[0];
    for (int i = 0; i < n; i++)
    {
        array[i] = array[i + 1];
    }
    printf("Rotated List : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}