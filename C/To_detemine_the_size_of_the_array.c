#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
    int size_of_array = sizeof(array) / sizeof(array[0]);
    printf("The size of the array : %d", size_of_array);
    return 0;
}