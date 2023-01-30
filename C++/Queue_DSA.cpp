#include <bits/stdc++.h>
using namespace std;
typedef struct Queue
{
    int front, rear;
    int size, capacity;
    int *arr;
} Queue;
Queue *createQueue(int capacity)
{
    Queue *qu = (Queue *)malloc(sizeof(Queue));
    qu->capacity = capacity;
    qu->front = 0;
    qu->size = 0;
    qu->rear = capacity - 1;
    qu->arr = (int *)malloc(sizeof(int) * capacity);
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
        cout << "No elements can be added";
        return;
    }
    qu->rear = (qu->rear + 1) % (qu->capacity);
    qu->arr[qu->rear] = data;
    qu->size++;
}
int Front(Queue *qu)
{
    if (isEmpty(qu))
    {
        return -1;
    }
    return qu->arr[qu->front];
}
int Rear(Queue *qu)
{
    if (isEmpty(qu))
    {
        return -1;
    }
    return qu->arr[qu->rear];
}
int DeQueue(Queue *qu)
{
    if (isEmpty(qu))
    {
        cout << "No Element is present " << endl;
        return -1;
    }
    int data = qu->arr[qu->front];
    qu->front = (qu->front + 1) % qu->capacity;
    qu->size--;
    return data;
}
void Display(Queue *qu)
{
    for (int i = 0; i < qu->size; i++)
    {
        cout << qu->arr[(qu->front + i) % qu->capacity] << " ";
    }
}
int main()

{
    int capacity, size;
    cin >> capacity >> size;
    Queue *qu = createQueue(capacity);
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        Enqueue(qu, ele);
    }
    Display(qu);
    cout << "Front Queue : " << Front(qu) << endl;
    cout << "Rear Queue : " << Rear(qu) << endl;
    cout << "Deleted Element : " << DeQueue(qu) << endl;
    cout << "Deleted Element : " << DeQueue(qu) << endl;
    Display(qu);
    cout << endl;
    Enqueue(qu, 12);
    Enqueue(qu, 10);
    Display(qu);
}