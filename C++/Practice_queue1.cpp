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
    qu->size = 0;
    qu->rear = capacity - 1;
    qu->array = (int *)malloc(sizeof(int) * capacity);
    return qu;
}
bool isEmpty(Queue *qu)
{
    return qu->size == 0;
}
bool isFull(Queue *qu)
{
    return qu->size == qu->capacity;
}
void Enqueue(Queue *qu, int data)
{
    if (isFull(qu))
    {
        cout << "No more Elements can be added " << endl;
        return;
    }
    qu->rear = (qu->rear + 1) % (qu->capacity);
    qu->array[qu->rear] = data;
    qu->size++;
}
void Display(Queue *qu)
{
    for (int i = 0; i < qu->size; i++)
    {
        cout << qu->array[(qu->front + i) % qu->capacity] << " ";
    }
}
int Front(Queue *qu)
{
    if (isEmpty(qu))
    {
        cout << "No Element is Present " << endl;
        return -1;
    }
    return qu->array[qu->front];
}
int Rear(Queue *qu)
{
    if (isEmpty(qu))
    {
        cout << "No Element is Present " << endl;
        return -1;
    }
    return qu->array[qu->rear];
}
int DeQueue(Queue *qu)
{
    if (isEmpty(qu))
    {
        cout << "No Element is present " << endl;
        return -1;
    }
    int data = qu->array[qu->front];
    qu->front = (qu->front + 1) % (qu->capacity);
    qu->size--;
    return data;
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
    cout << "Display" << endl;
    Display(qu);
    cout << endl;
    cout << "Front " << Front(qu) << endl;
    cout << "Rear : " << Rear(qu) << endl;
    cout << " The Deleted Element : " << DeQueue(qu) << endl;
    cout << " The Deleted Element : " << DeQueue(qu) << endl;
    Display(qu);
}