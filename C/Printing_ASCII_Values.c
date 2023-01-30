#include <stdio.h>
int main()
{
    char string[100];
    int number;
    int count = 0;
    printf("Enter the number of characters to be stored in the string \n");
    scanf("%d", &number);
    printf("Enter the string : \n");
    scanf("%s", &string);
    while (count < number)
    {
        printf("%c : %d\n", string[count], string[count]);
        ++count;
    }
    return 0;
}