#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter the string name : \n");
    gets(string);
    printf("The length of the string : %d", strlen(string));
    return 0;
}