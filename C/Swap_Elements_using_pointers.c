#include <stdio.h>
void swapping(float *ptr1, float *ptr2);
int main()
{
    int size_of_array;
    printf("Enter the size of the array : \n");
    scanf("%d", &size_of_array);
    float array1[size_of_array];
    for (int i = 0; i < size_of_array; i++)
    {
        scanf("%f", array1 + i);
    }
    swapping(array1 + 2, array1 + 3);
    printf("The resultant array : \n");
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%.2f ", array1[i]);
    }
}
void swapping(float *ptr1, float *ptr2)
{
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}