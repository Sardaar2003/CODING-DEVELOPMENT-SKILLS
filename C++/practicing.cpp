#include <bits/stdc++.h>
using namespace std;
int binarySearch(int left, int right, int array[], int element)
{
    if (right >= left)
    {
        int middle = left + (right - left) / 2;
        if (array[middle] == element)
        {
            return middle;
        }
        else if (array[middle] < element)
        {
            return binarySearch(middle + 1, right, array, element);
        }
        else
        {
            return binarySearch(left, middle, array, element);
        }
    }
    return -1;
}
int main()
{
    int numberOfSize;
    cin >> numberOfSize;
    int array[numberOfSize];
    for (int i = 0; i < numberOfSize; i++)
    {
        cin >> array[i];
    }
    sort(array, array + numberOfSize);
    int element;
    cin >> element;
    if (binarySearch(0, numberOfSize - 1, array, element) == -1)
    {
        cout << "The element is not present" << endl;
    }
    else
    {
        cout << binarySearch(0, numberOfSize - 1, array, element) << endl;
    }
}