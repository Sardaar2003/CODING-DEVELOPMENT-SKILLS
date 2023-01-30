#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int j, element;
    for (int i = 1; i < size; i++)
    {
        element = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > element)
        {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = element;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}