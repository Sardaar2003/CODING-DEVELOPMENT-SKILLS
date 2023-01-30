#include <stdio.h>
int main()
{
    int number_1, number_2, number_3;
    printf("Enter the three numbers : \n");
    scanf("%d %d %d", &number_1, &number_2, &number_3);
    if (number_1 >= number_2 && number_2 >= number_3)
    {
        printf("The largest number : %d", number_1);
    }
    else if (number_2 >= number_1 && number_2 >= number_3)
    {
        printf("The largest number : %d", number_2);
    }
    else
    {
        printf("The largest number : %d", number_3);
    }
    return 0;
}