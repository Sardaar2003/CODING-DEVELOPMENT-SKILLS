#include <stdio.h>
int gcd_value(int, int);
int main()
{
    int number1, number2;
    int result;
    printf("Enter the two number : ");
    scanf("%d %d", &number1, &number2);
    result = gcd_value(number1, number2);
    printf("The GCD of two number : %d & %d : %d", number1, number2, result);
    return 0;
}
int gcd_value(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd_value(b, a % b);
    }
}