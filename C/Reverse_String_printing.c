#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter the string : \n");
    gets(string);
    printf("The reverse string : %s\n", strrev(string));
    return 0;
}