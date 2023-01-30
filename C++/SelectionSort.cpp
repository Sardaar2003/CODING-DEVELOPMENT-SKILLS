#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfElements;
    cin >> numberOfElements;
    int array[numberOfElements];
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> array[i];
    }
    int minIndex = 0;
    for (int i = 0; i < numberOfElements - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < numberOfElements; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = array[minIndex];
            array[minIndex] = array[i];
            array[i] = temp;
        }
    }
    for (int item : array)
    {
        cout << item << " ";
    }
}