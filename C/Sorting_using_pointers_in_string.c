#include <stdio.h>
#include <string.h>
#define max_value 100
int main()
{
    char string[max_value];
    char *ptr;
    printf("Enter the string : ");
    fgets(string, max_value, stdin);
    ptr = string;
    char temp;
    for (int i = 0; i < strlen(string) - 1; i++)
    {
        for (int j = i + 1; j < strlen(string); j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = string[i];
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("The sorted string : %s", string);
    return 0;
}