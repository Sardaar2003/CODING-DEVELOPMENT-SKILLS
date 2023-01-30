#include <bits/stdc++.h>
using namespace std;
void minHeap(int array[], int size, int index)
{
    int smallest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    if (leftChild < size && array[smallest] > array[leftChild])
    {
        smallest = leftChild;
    }
    if (rightChild < size && array[smallest] > array[rightChild])
    {
        smallest = rightChild;
    }
    if (smallest != index)
    {
        swap(array[smallest], array[index]);
        minHeap(array, size, smallest);
    }
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            minHeap(array, size, i);
        }
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}