#include <stdio.h>
#define max_value 100
void segregate(int array[], int size);
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
    segregate(array, number);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
void segregate(int array[], int size)
{
    int left = 0;
    int right = size - 1;
    while (array[left] == 0 && left < right)
    {
        left++;
        while (array[right] == 1 && left < right)
            right--;
        if (left < right)
        {
            array[left] = 0;
            array[right] = 1;
            left++;
            right--;
        }
    }
}
