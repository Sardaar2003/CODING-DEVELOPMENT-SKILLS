#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter the string : \n");
    gets(string);
    int i = 0;
    int alphabet = 0;
    int number = 0;
    int special_charac = 0;
    while (string[i] != '\0')
    {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= "A" && string[i] >= "Z"))
        {
            alphabet += 1;
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
            number += 1;
        }
        else
        {
            special_charac += 1;
        }
        i++;
    }
    printf("The number of alphabet : %d\n", alphabet);
    printf("The number of numbers  : %d\n", number);
    printf("The number of special character : %d\n", special_charac);
    return 0;
}