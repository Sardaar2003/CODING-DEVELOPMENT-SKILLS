#include <stdio.h>
int fibonacci(int);
int main()
{
    int number1;
    int result;
    printf("Enter the nth terms : ");
    scanf("%d", &number1);
    if (number1 < 0)
    {
        printf("Negative number fibonacci invalid !!!");
    }
    else
    {
        result = fibonacci(number1);
        printf("The fibonacci series of n terms : %d", result);
    }
    return 0;
}
int fibonacci(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(a - 1) + fibonacci(a - 2));
    }
}