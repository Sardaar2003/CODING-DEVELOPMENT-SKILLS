#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
typedef struct Queue
{
    Node *front;
    Node *rear;
} Queue;
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
Queue *createQueue()
{
    Queue *qu = (Queue *)malloc(sizeof(Queue));
    qu->front = nullptr;
    qu->rear = nullptr;
    return qu;
}
void EnQueue(Queue *qu, int data)
{
    Node *newNode = createNode(data);
    if (qu->rear == nullptr)
    {
        qu->rear = newNode;
        qu->front = newNode;
    }
    qu->rear->next = newNode;
    qu->rear = newNode;
}
int DeQueue(Queue *qu)
{
    if (qu->front == nullptr)
    {
        return -1;
    }
    Node *temp = qu->front;
    int data = temp->data;
    qu->front = qu->front->next;
    if (qu->front == nullptr)
    {
        qu->front = nullptr;
        qu->rear = nullptr;
    }
    free(temp);
    return data;
}
int main()
{
    Queue *qu = createQueue();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        EnQueue(qu, ele);
    }
    cout << DeQueue(qu) << endl;
    cout << DeQueue(qu) << endl;
    cout << DeQueue(qu) << endl;
    EnQueue(qu, 100);
    cout << "Queue Front : " << qu->front->data << endl;
    cout << "Queue Rear : " << qu->rear->data << endl;
}