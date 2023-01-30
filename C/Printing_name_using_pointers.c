#include <stdio.h>
int main()
{
    char string[100];
    char *ptr;

    printf("Enter a string: ");
    gets(string);

    ptr = string;

    printf("Entered string is: ");
    while (*ptr != '\0')
        printf("%c", *ptr++);

    return 0;
}