#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number :\n");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("It is a positive number");
    }
    else if (number < 0)
    {
        printf("It is a negative number");
    }
    else if (number == 0)
    {
        printf("It is a zero number");
    }
    return 0;
}