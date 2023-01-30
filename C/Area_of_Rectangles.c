#include <stdio.h>
int main()
{
    float length, breadth;
    scanf("%f %f", &length, &breadth);
    printf("Area of the rectange of length : %.2f and breadth : %.2f : %.2f", length, breadth, (length * breadth));
    return 0;
}