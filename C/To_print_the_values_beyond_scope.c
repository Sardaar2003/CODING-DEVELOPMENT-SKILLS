#include <stdio.h>
int main()
{
    int array[5];
    int c, b;
    for (b = 0; b < 10 && (scanf("%d", &c)); b++)
    {
        array[b] = c;
    }
    for (b = 0; b < 15; b++)
    {
        printf("%d ", array[b]);
    }
    return 0;
}