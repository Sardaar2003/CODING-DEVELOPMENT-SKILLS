#include <stdio.h>
int product(int, int);
int main()
{
    int number1, number2;
    int result;
    printf("Enter the two number : \n");
    scanf("%d %d", &number1, &number2);
    result = product(number1, number2);
    printf("The product of two number : %d X %d : %d", number1, number2, result);
    return 0;
}
int product(int a, int b)
{
    if (a < b)
    {
        return product(b, a);
    }
    else
    {
        if (b != 0)
        {
            return (a + product(a, b - 1));
        }
        else
        {
            return 0;
        }
    }
}