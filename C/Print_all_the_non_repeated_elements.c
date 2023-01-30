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
}