#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], string2[100];
    printf("Enter the string 1 : \n");
    gets(string);
    printf("Enter the string 2 : \n");
    gets(string2);
    if (strcmp(string, string2) == 0)
    {
        printf("The strings are equal ");
    }
    else
    {
        printf("The strings are not equal ");
    }
    return 0;
}