#include <stdio.h>
int addition(int *ptr1, int *ptr2);
int main()
{
    int number1, number2;
    int *ptr1, *ptr2;
    printf("Enter the two number : ");
    scanf("%d %d", &number1, &number2);
    ptr1 = &number1;
    ptr2 = &number2;
    int result;
    result = addition(ptr1, ptr2);
    printf("The sum of %d + %d : %d", *(ptr1), *(ptr2), result);
    return 0;
}
int addition(int *ptr1, int *ptr2)
{
    return *(ptr1) + *(ptr2);
}