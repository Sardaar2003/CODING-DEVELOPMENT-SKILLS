#include <stdio.h>
int main()
{
    int CAT_1, CAT_2, attendance;
    float average;
    printf("Enter the CAT : 1 : MARKS : ");
    scanf("%d", &CAT_1);
    printf("Enter the CAT : 2 : MARKS : ");
    scanf("%d", &CAT_2);
    average = (CAT_1 + CAT_2) / 2;
    printf("The average marks for both the test : %.2f\n", average);
    if (average > 30)
    {
        printf("Enter the percentage for attendance : ");
        scanf("%d", &attendance);
        if (attendance >= 75)
        {
            printf("Eligible ");
        }
        else
        {
            printf("Not Eligible ");
        }
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}