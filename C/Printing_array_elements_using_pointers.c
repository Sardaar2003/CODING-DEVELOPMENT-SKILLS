#include <stdio.h>
int main()
{
    int array[10];
    int *ptr;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    ptr = array;
    for (int i = 0; i < 10; i++)
    {
        if (*ptr % 5 == 0)
        {
            printf("Fizz");
            *ptr++;
        }
        *ptr++;
    }
    return 0;
}