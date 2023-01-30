#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int *s)
{
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            if (strcmp(s[i], s[j]) > 0)
            {
                char aux[100];
                strcpy(aux, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], s[i]);
            }
}
int main()
{
    char s[3][100];

    for (int i = 0; i < 3; i++)
        scanf("%s", s[i]);
    sort(s);

    return 0;
}