#include <stdio.h>
#define max_value 100
int main()
{
    char string[max_value];
    char *ptr;
    printf("Enter the name : ");
    fgets(string, max_value, stdin);
    ptr = string;
    while (*(ptr) != '\0')
    {
        printf("%c", *(ptr));
        ptr++;
    }
    return 0;
}