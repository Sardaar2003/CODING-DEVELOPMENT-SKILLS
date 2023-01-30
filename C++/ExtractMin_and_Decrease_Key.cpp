#include <bits/stdc++.h>
using namespace std;
int size;
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
void heapify_down(int heap[], int size, int i)
{
    int l = leftChild(i);
    int r = rightChild(i);
    int s = i;
    if (l < size && heap[l] < heap[i])
    {
        s = l;
    }
    if (r < size && heap[r] < heap[s])
    {
        s = r;
    }
    if (s != i)
    {
        swap(heap[i], heap[s]);
        heapify_down(heap, size, s);
    }
}
void build_heap(int heap[], int size)
{
    for (int i = (size / 2 - 1); i >= 0; i--)
    {
        heapify_down(heap, size, i);
    }
}
void print_heap(int heap[])
{
    for (int i = 0; i < size; i++)
    {
        cout << heap[i] << " ";
    }
}
int extractionMinimum(int heap[])
{
    int root = heap[0];
    heap[0] = heap[size - 1];
    size--;
    heapify_down(heap, size, 0);
    return root;
}
void decrease_key(int heap[], int index, int value)
{
    heap[index] = value;
    while (index != 0 && heap[parent(index)] > heap[index])
    {
        swap(heap[parent(index)], heap[index]);
        index = parent(index);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        size = 0;
        int n;
        cin >> n;
        int *heap = (int *)malloc(sizeof(int) * (n + 1));
        for (int i = 0; i < n; i++)
        {
            cin >> heap[i];
            size++;
        }
        build_heap(heap, n);
        cout << extractionMinimum(heap) << endl;
        print_heap(heap);
        decrease_key(heap, 4, -1);
        cout << "\nPrint after the decrease key : " << endl;
        print_heap(heap);
    }
}