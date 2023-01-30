#include <stdio.h>
#define max_value 100
int main()
{
    int array[max_value];
    int number;
    printf("Enter the size of the array : \n");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    int spilliting_element;
    printf("Enter the position at which the array is to be splitted \n");
    scanf("%d", &spilliting_element);
    for (int i = 0; i < spilliting_element; i++)
    {
        array[number] = array[0];
        for (int j = 0; j < number; j++)
        {
            array[j] = array[j + 1];
        }
    }
    printf("Resultant Array : \n");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}