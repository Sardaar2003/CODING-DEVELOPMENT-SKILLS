#include <stdio.h>
int main()
{
    char subject;
    printf("Enter the character : ");
    scanf("%c", &subject);
    if (subject >= 'a' && subject <= 'z' || subject >= 'A' && subject <= 'Z')
    {
        printf("It is a alphabet");
    }
    else
    {
        printf("It is not a alphabet");
    }
    return 0;
}