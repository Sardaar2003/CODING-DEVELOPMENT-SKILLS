#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int front, rear;
    int size, capacity;
    int *array;

    Queue(int capacity)
    {
        this->capacity = capacity;
        front = 0;
        rear = capacity - 1;
        size = 0;
        array = new int[capacity];
    }
    bool isFull()
    {
        return size == capacity;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void Enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        array[rear] = data;
        size++;
    }
    void Display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
    int Front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty " << endl;
            return -1;
        }
        return array[front];
    }
    int Rear()
    {
        if (isEmpty())
        {
            cout << "Queue is Full" << endl;
            return -1;
        }
        return array[rear];
    }
    int DeQueue()
    {
        if (isEmpty())
        {
            cout << "The Queue is Empty " << endl;
            return -1;
        }
        int data = array[front];
        front = (front + 1) % capacity;
        size--;
        return data;
    }
};
int main()
{
    int capacity, size;
    cin >> capacity >> size;
    Queue qu(capacity);
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        qu.Enqueue(ele);
    }
    qu.Display();
    cout << "Front element : " << qu.Front() << endl;
    cout << qu.DeQueue() << endl;
    qu.Enqueue(15);
    qu.Display();
    cout << "Rear element : " << qu.Rear() << endl;
}