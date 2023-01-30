#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int array[1000];
    int size;
    Heap()
    {
        array[0] = -1;
        size = 0;
    }
    void insertion(int val)
    {
        size += 1;
        int index = size;
        array[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (array[parent] > array[index])
            {
                swap(array[parent], array[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void Delete()
    {
        if (size == 0)
        {
            cout << "No element present" << endl;
            return;
        }
        array[1] = array[size];
        size--;
        int index = 1;
        while (index < size)
        {
            int leftChild = 2 * index;
            int rightChild = 2 * index + 1;
            if (leftChild < size && array[index] < array[leftChild])
            {
                swap(array[index], array[leftChild]);
                index = leftChild;
            }
            else if (rightChild < size && array[index] < array[rightChild])
            {
                swap(array[leftChild], array[index]);
                index = rightChild;
            }
            else
            {
                return;
            }
        }
    }
};
void heapify(int arr[], int size, int i)
{
    int largest = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;
    if (leftChild <= size && arr[largest] < arr[leftChild])
    {
        // swap(arr[largest], arr[leftChild]);
        largest = i;
    }
    if (rightChild <= size && arr[largest] < arr[rightChild])
    {
        // swap(arr[largest], arr[rightChild]);
        largest = rightChild;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}
void heapSort(int array[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(array[size], array[1]);
        size--;
        heapify(array, size, 1);
    }
}

int main()
{
    int array[6] = {-1,
                    54,
                    53,
                    55,
                    52,
                    50};
    int size = 5;
    for (int i = size / 2; i > 0; i--)
    {
        heapify(array, size, i);
    }
    heapSort(array, size);
    cout << "Printing the info" << endl;
    for (int i = 1; i <= size; i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}