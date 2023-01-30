#include <stdio.h>
int sum(int number);
int main()
{
    int number;
    int result;
    printf("Enter the number : \n");
    scanf("%d", &number);
    result = sum(number);
    printf("The number of digits : %d\n", result);
    return 0;
}
int sum(int number)
{
    if (number != 0)
    {
        return (number % 10 + sum(number / 10));
    }
    else
    {
        return 0;
    }
}