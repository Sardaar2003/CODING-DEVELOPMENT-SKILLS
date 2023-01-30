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
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        array[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (array[parent] < array[index])
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
    }
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        array[1] = array[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftChild = i * 2;
            int rightChild = 2 * i + 1;
            if (leftChild < size && array[i] < array[leftChild])
            {
                swap(array[i], array[leftChild]);
                i = leftChild;
            }
            else if (rightChild < size && array[i] < array[rightChild])
            {
                swap(array[i], array[rightChild]);
                i = rightChild;
            }
            else
            {
                return;
            }
        }
    }
};
void heapify(int array[], int n, int i)
{
    int largest = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;
    if (leftChild <= n && array[largest] < array[leftChild])
    {
        largest = leftChild;
    }
    if (rightChild <= n && array[largest] < array[rightChild])
    {
        largest = rightChild;
    }
    if (largest != i)
    {
        swap(array[largest], array[i]);
        heapify(array, n, largest);
    }
}
void HeapSort(int array[], int n)
{
    int t = n;
    while (t > 1)
    {
        swap(array[t], array[1]);
        t--;
        heapify(array, n, 1);
    }
}
int main()
{
    // Heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // cout << endl;
    // h.deleteFromHeap();
    // h.print();
    int arr[6] = {-1,
                  54,
                  53,
                  55,
                  52,
                  50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "Printing value : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    HeapSort(arr, n);
    cout << "Printing value : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // h.insert(50);
    return 0;
}