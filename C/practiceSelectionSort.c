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
    int min_index, temp;
    for (int i = 0; i < size; i++)
    {
        min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }
        if (min_index != i)
        {
            temp = array[min_index];
            array[min_index] = array[i];
            array[i] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}