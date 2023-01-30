#include <stdio.h>
int product(int, int);
int main()
{
    int number_1, number_2;
    int result;
    printf("Enter the two number : \n");
    scanf("%d %d", &number_1, &number_2);
    result = product(number_1, number_2);
    printf("The product of two number : %d X %d : %d", number_1, number_2, result);
    return 0;
}
int product(int a, int b)
{
    int temp = 0;
    while (b != 0)
    {
        temp += a;
        b--;
    }
    return temp;
}