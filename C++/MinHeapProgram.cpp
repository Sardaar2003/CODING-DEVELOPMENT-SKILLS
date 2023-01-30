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
    void Insertion(int value)
    {
        size += 1;
        int index = size;
        array[index] = value;
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
            cout << "No element Present " << endl;
            return;
        }
        array[1] = array[size];
        size--;
        int index = 1;
        while (index < size)
        {
            int leftChild = 2 * index;
            int rightChild = 2 * index + 1;
            if (leftChild <= size && array[index] > array[leftChild])
            {
                swap(array[index], array[leftChild]);
                index = leftChild;
            }
            else if (rightChild <= size && array[index] > array[rightChild])
            {
                swap(array[index], array[rightChild]);
                index = rightChild;
            }
            else
            {
                return;
            }
        }
    }
};
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        Heap hp;
        for (int i = 0; i < size; i++)
        {
            int val;
            cin >> val;
            hp.Insertion(val);
        }
        hp.print();
        cout << hp.array[1] << " ";
        hp.Delete();
        hp.print();
    }
    return 0;
}