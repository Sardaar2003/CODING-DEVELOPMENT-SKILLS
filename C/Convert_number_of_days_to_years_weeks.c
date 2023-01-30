#include <stdio.h>
int main()
{
    int number_of_days, year, weeks;
    scanf("%d", &number_of_days);
    year = (number_of_days) / 365;
    weeks = (number_of_days % 365) / 7;
    number_of_days = number_of_days - ((year * 365) + (weeks * 7));
    printf("Number of years : %d\n", year);
    printf("Number of weeks : %d\n", weeks);
    printf("Number of days  : %d", number_of_days);
    return 0;
}