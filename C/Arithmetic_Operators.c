#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Addition (A+B) : %d\n", (a + b));
    printf("Substraction (A-B) : %d\n", (a - b));
    printf("Multiplication (A*B) : %d\n", (a * b));
    printf("Division (A/B) : %.2f", (float)a / b);
    return 0;
}