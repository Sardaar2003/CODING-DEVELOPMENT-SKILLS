#include <stdio.h>
int main()
{
    char subject;
    printf("Enter the character : \n");
    scanf("%c", &subject);
    if (subject >= 'a' && subject <= 'z' || subject >= 'A' && subject <= 'Z')
    {
        printf("It is a alphabet");
    }
    else if (subject >= '0' && subject <= '9')
    {
        printf("It is a number");
    }
    else
    {
        printf("It is a special character");
    }
    return 0;
}