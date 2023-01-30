#include <stdio.h>
int main()
{
    int number1, number2;
    int *ptr1, *ptr2;
    printf("Enter the two numbers value : ");
    scanf("%d %d", &number1, &number2);
    ptr1 = &number1;
    ptr2 = &number2;
    if (*(ptr1) > *(ptr2))
    {
        printf("%d is the greatest ", *(ptr1));
    }
    else
    {
        printf("%d is the greatest ", *(ptr2));
    }
    return 0;
}