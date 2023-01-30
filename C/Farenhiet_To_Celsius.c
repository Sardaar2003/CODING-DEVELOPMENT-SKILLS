#include <stdio.h>
int main()
{
    float celsius, farenhiet;
    scanf("%f", &farenhiet);
    celsius = (farenhiet - 32) / 1.8;
    printf("Celsius : %.2f", celsius);
    return 0;
}