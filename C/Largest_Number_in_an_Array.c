#include <stdio.h>
int main()
{
    int array_1[10];
    int largest = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array_1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (array_1[i] > largest)
        {
            largest = array_1[i];
        }
    }
    printf("The largest number in the array : %d", largest);
    return 0;
}