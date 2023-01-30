#include <stdio.h>
long power(int, int);
int main()
{
    int number;
    int pow;
    int result;
    printf("Enter the number : \n");
    scanf("%d", &number);
    printf("Enter the power : \n");
    scanf("%d", &pow);
    result = power(number, pow);
    printf("The power of %d to %d : %ld", number, pow, result);
    return 0;
}
long power(int number, int pow)
{
    if (pow)
    {
        return number * power(number, pow - 1);
    }
    return 1;
}