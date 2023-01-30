#include <stdio.h>
int factorial(int number);
int main()
{
    int number;
    int result;
    printf("Enter the number : ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Cannot be found");
    }

    else
    {
        result = factorial(number);
        printf(" %d ! : %d", number, result);
    }
    return 0;
}
int factorial(int number)
{
    // int value = number;
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}