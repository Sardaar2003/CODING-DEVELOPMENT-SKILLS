#include <stdio.h>
#include <string.h>
int main()
{
    char object;
    printf("Enter the character : \n");
    scanf("%c", &object);

    if (object == 'a' || object == 'e' || object == 'i' || object == 'o' || object == 'u' || object == 'A' || object == 'E' || object == 'I' || object == 'O' || object == 'U')
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is a Consonant");
    }
    return 0;
}