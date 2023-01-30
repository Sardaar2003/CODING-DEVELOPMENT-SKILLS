#include <stdio.h>
int large(int list[], int position, int largest);
int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    if (n == 0)
    {
        printf("There is no largest element in the array");
    }
    else
    {
        int largest = array[0];
        largest = large(array, n - 1, largest);
        printf("The largest element in the array : %d", largest);
    }
    return 0;
}
int large(int list[], int position, int largest)
{
    if (position == 0)
    {
        return largest;
    }
    if (position > 0)
    {
        if (list[position] > largest)
        {
            largest = list[position];
        }
        return large(list, position - 1, largest);
    }
}