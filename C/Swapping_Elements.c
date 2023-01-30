#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("After Swapping\n");
    printf("%d ", a);
    printf("%d", b);
    return 0;
}