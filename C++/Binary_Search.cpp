#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int left, int right, int ele)
{
    if (right >= left)
    {
        int mid = (left + (right - left)) / 2;
        if (arr[mid] == ele)
            return mid;
        else if (arr[mid] < ele)
            return BinarySearch(arr, mid++, right, ele);
        else if (arr[mid] > ele)
            return BinarySearch(arr, left, mid--, ele);
    }
    return -1;
}
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    int elements;
    cin >> elements;
    cout << BinarySearch(array, 0, size, elements) << endl;
}