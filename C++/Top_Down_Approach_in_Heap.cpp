#include <bits/stdc++.h>
using namespace std;
int parent(int position)
{
    return ((position - 1) / 2);
}
int leftChild(int position)
{
    return (2 * position) + 1;
}
int rightChild(int position)
{
    return (2 * position) + 2;
}
void insert(int heap[], int index, int element)
{
    heap[index] = element;
    while (index != 0 && heap[parent(index)] > heap[index])
    {
        swap(heap[parent(index)], heap[index]);
        index = parent(index);
    }
}
void print_heap(int heap[], int size)
{
    for (int i = 0; i < size; i++)
        cout << heap[i] << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int heap[size];
        int ele;
        for (int i = 0; i < size; i++)
        {
            cin >> ele;
            insert(heap, i, ele);
        }
        print_heap(heap, size);
    }
}