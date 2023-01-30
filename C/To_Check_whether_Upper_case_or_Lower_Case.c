#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character : \n");
    scanf("%c", &character);
    if (character >= 'a' && character <= 'z')
    {
        printf("It is a lower case alphabet");
    }
    else if (character >= 'A' && character <= 'Z')
    {
        printf("It is a Upper case alphabet");
    }
    return 0;
}