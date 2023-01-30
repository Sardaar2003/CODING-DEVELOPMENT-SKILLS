#include <stdio.h>
int gcd_value(int, int);
int main()
{
    int number_1, number_2;
    int result;
    int lcm;
    printf("Enter the two number : ");
    scanf("%d %d", &number_1, &number_2);
    result = gcd_value(number_1, number_2);
    lcm = (number_1 * number_2) / result;
    printf("The LCM of two number : %d and %d : %d", number_1, number_2, lcm);
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