#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter the string name : \n");
    gets(string);
    printf("The string in lower case : %s \n", strlwr(string));
    return 0;
}