#include <stdio.h>
int main()
{
    float celcius, farenhiet;
    scanf("%f", &celcius);
    farenhiet = (1.8 * celcius) + 32;
    printf("Farenhiet : %.2f", farenhiet);
    return 0;
}