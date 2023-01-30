#include <stdio.h>
int main()
{
    float radius;
    scanf("%f", &radius);
    printf("Area of the circle of radius %.2f : %.2f", radius, (3.14 * radius * radius));
    return 0;
}