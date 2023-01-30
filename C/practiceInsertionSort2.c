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
    int element, key;
    for (int i = 1; i < size; i++)
    {
        element = array[i];
        key = i - 1;
        while (key >= 0 && array[key] > element)
        {
            array[key + 1] = array[key];
            key -= 1;
        }
        array[key + 1] = element;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}