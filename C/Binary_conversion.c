#include <stdio.h>
int binary_conversion(int number);
int main()
{
    int number;
    int binary;
    printf("Enter the number : \n");
    scanf("%d", &number);
    binary = binary_conversion(number);
    printf("The binary number of %d : %d", number, binary);
    return 0;
}
int binary_conversion(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return (number % 2) + 10 * binary_conversion(number / 2);
    }
}