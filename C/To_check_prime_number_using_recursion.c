#include <stdio.h>
int prime_num(int number, int i);
int main()
{
    int number;
    int check;
    printf("Enter the number to be checked for the prime number : \n");
    scanf("%d", &number);
    check = prime_num(number, number / 2);
    if (check == 1)
    {
        printf("The %d is a prime number", number);
    }
    else
    {
        printf("The %d is not a prime number", number);
    }
    return 0;
}
int prime_num(int number, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (number % i == 0)
        {
            return 0;
        }
        else
        {
            return prime_num(number, i - 1);
        }
    }
}
