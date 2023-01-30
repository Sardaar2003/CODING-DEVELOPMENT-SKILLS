#include <stdio.h>
int main()
{
    int number1, number2;
    int *ptr1, *ptr2;
    int *ptr3;
    printf("Enter the two number : ");
    scanf("%d %d", &number1, &number2);
    ptr1 = &number1;
    ptr2 = &number2;
    printf("The sum of %d + %d : %d", *ptr1, *ptr2, *(ptr1) + *(ptr2));
    return 0;
}