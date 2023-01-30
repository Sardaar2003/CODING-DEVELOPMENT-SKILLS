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
    qu->rear = qu->capacity - 1;
    qu->size = 0;
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
void Display(Queue *qu)
{
    for (int i = 0; i < qu->size; i++)
    {
        cout << qu->array[(qu->front + i) % qu->capacity] << " ";
    }
    cout << endl;
}
void Enqueue(Queue *qu, int data)
{
    if (isFull(qu))
    {
        // cout << "Elements are full" << endl;
        return;
    }
    qu->rear = (qu->rear + 1) % (qu->capacity);
    qu->array[qu->rear] = data;
    qu->size++;
}
int Dequeue(Queue *qu)
{
    if (isEmpty(qu))
    {
        // cout << "The Queue is Empty " << endl;
        return -1;
    }
    int data = qu->array[qu->front];
    qu->front = (qu->front + 1) % (qu->capacity);
    qu->size--;
    return data;
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
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int capacity;
        cin >> capacity;
        Queue *qu = CreateQueue(capacity);
        for (int i = 1; i <= capacity; i++)

        {
            Enqueue(qu, i);
        }
        while (qu->size != 1)
        {
            int data = Dequeue(qu);
            Enqueue(qu, data);
            int value = Dequeue(qu);
        }
        cout << Front(qu) << endl;
    }
}
