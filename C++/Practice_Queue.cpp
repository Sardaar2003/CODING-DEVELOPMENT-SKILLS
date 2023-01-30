#include <bits/stdc++.h>
using namespace std;
typedef struct Queue
{
    int front, rear;
    int size, capacity;
    int *array;
} Queue;
Queue *CreateQueue(int capacity)
{
    Queue *qu = (Queue *)malloc(sizeof(Queue));
    qu->capacity = capacity;
    qu->front = 0;
    qu->rear = capacity - 1;
    qu->size = 0;
    qu->array = (int *)malloc(sizeof(int) * capacity);
    return qu;
}
bool isFull(Queue *qu)
{
    return qu->size == qu->capacity;
}
bool isEmpty(Queue *qu)
{
    return qu->size == 0;
}
void Enqueue(Queue *qu, int data)
{
    if (isFull(qu))
    {
        cout << "No elements can be added " << endl;
        return;
    }
    qu->rear = (qu->rear + 1) % (qu->capacity);
    qu->array[qu->rear] = data;
    qu->size++;
}

int Front(Queue *qu)
{
    if (isEmpty(qu))
    {
        return -1;
    }
    return qu->array[qu->front];
}
int Rear(Queue *qu)
{
    if (isEmpty(qu))
    {
        return -1;
    }
    return qu->array[qu->rear];
}
int DeQueue(Queue *qu)
{
    if (isEmpty(qu))
    {
        cout << "The Queue is Empty " << endl;
        return -1;
    }
    int data = qu->array[qu->front];
    qu->front = (qu->front + 1) % qu->capacity;
    qu->size--;
    return data;
}
void Display(Queue *qu)
{
    for (int i = 0; i < qu->size; i++)
    {
        cout << qu->array[(qu->front + i) % qu->capacity] << " ";
    }
    cout << endl;
}
int main()
{
    int capacity, size;
    cin >> capacity >> size;
    Queue *qu = CreateQueue(capacity);
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        Enqueue(qu, ele);
    }
    Display(qu);
    cout << "Front of the Queue : " << Front(qu) << endl;
    cout << DeQueue(qu) << endl;
    Display(qu);

    cout << "Rear of the Queue : " << Rear(qu) << endl;
}