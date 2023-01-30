#include <stdio.h>
int main()
{
    int sizeOfArray;
    scanf("%d", &sizeOfArray);
    int arrayData[sizeOfArray];
    int result[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &arrayData[i]);
    }
    int maxValue = arrayData[0];
    int index = 1;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arrayData[i] < maxValue)
            result[i] = index;
        else if (arrayData[i] >= maxValue)
        {
            maxValue = arrayData[i];
            index = i + 1;
            result[i] = index;
        }
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", result[i]);
    }
}