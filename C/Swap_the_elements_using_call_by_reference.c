#include <stdio.h>
void swapping(int *ptr1, int *ptr2);
int main()
{
    int number1, number2;
    int *ptr1, *ptr2;
    printf("Enter the two number : ");
    scanf("%d %d", &number1, &number2);
    ptr1 = &number1;
    ptr2 = &number2;
    swapping(ptr1, ptr2);
    printf("After swapping : \n");
    printf("%d %d", *ptr1, *ptr2);
    return 0;
}
void swapping(int *ptr1, int *ptr2)
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}