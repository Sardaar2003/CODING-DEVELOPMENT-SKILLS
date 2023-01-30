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
void print_heap(int heap[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << heap[i] << " ";
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
        int heap[n];
        for (int i = 0; i < n; i++)
        {
            cin >> heap[i];
        }
        build_heap(heap, n);
        print_heap(heap, n);
    }
}