#include <stdio.h>
struct FAT_Calculation
{
    int CAT_1;
    int CAT_2;
    int Attendance;
};
int main()
{
    struct FAT_Calculation Student1;
    printf("Enter the CAT-1 Marks :\n");
    scanf("%d", &Student1.CAT_1);
    printf("Enter the CAT-2 Marks :\n");
    scanf("%d", &Student1.CAT_2);
    if (Student1.CAT_1 > 30)
    {
        if (Student1.CAT_2 > 30)
        {
            printf("Enter the Attendance percentage:\n");
            scanf("%d", &Student1.Attendance);
            if (Student1.Attendance > 75)
            {
                printf("Eligible \n");
                return 0;
            }
            else
            {
                printf("Not Eligible \n");
                return 0;
            }
        }
        else
        {
            printf("Not Eligible \n");
            return 0;
        }
    }
    else
    {
        printf("Not Eligible \n");
        return 0;
    }
}