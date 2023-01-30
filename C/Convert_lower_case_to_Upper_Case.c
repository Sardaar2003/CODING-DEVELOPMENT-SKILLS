#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter the string name : \n");
    gets(string);
    printf("The string is Upper Case : %s \n", strupr(string));
    return 0;
}