#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100], string2[100];
    printf("Enter the first string : \n");
    gets(string1);
    printf("Enter the second string : \n");
    gets(string2);
    strcat(string1, string2);
    printf("The concatenated string : %s\n", string1);
    return 0;
}