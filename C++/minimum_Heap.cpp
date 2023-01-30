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
// void heapify_down(int heap[], int size, int index)
// {
//     int l = leftChild(index);
//     int r = rightChild(index);
//     int s = index;
//     if (l < size && heap[l] < heap[index])
//     {
//         s = i;
//     }
//     if (r < size && heap[r] < heap[s])
//     {
//         s = r;
//     }
//     if (s != i)
//     {
//         swap(heap[i], heap[s]);
//         heapify_down(heap, size, s);
//     }
// }
void minimum_Heap(int heap[], int size, int index)
{
    int j, temp;
    temp = heap[index];
    j = 2 * index;
    while (j <= size)
    {
        if (j < size && heap[j + 1] < heap[j])
        {
            j++;
        }
        if (temp < heap[j])
            break;
        else if (temp >= heap[j])
        {
            heap[j / 2] = heap[j];
            j = 2 * j;
        }
    }
    heap[j / 2] = temp;
    return;
}
void build_heap(int heap[], int size)
{
    for (int i = (size / 2 - 1); i >= 0; i--)
    {
        minimum_Heap(heap, size, i);
    }
}
void print_heap(int heap[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
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
        for (int i = 0; i < size; i++)
        {
            cin >> heap[i];
        }
        build_heap(heap, size);
        print_heap(heap, size);
    }
}