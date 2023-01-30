#include <stdio.h>
#define max_value 100
void searchelement(int array[], int search_value, int size, int position);
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
    int searching_element;
    printf("Enter the searching element in the array : \n");
    scanf("%d", &searching_element);
    searchelement(array, searching_element, number, 0);
}
void searchelement(int array[], int search_value, int size, int position)
{
    if (array[position] == search_value && position < size)
    {
        printf("Found element at the position : %d\n", position + 1);
    }
    else if (position == size)
    {
        return;
    }
    return searchelement(array, search_value, size, position + 1);
}