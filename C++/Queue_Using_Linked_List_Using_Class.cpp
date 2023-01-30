#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
public:
    Node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
    void EnQueue(int data)
    {
        Node *temp = new Node(data);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    int DeQueue()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty " << endl;
            return -1;
        }
        Node *temp = front;
        front = front->next;
        int data = temp->data;
        if (front == NULL)
        {
            front = rear = NULL;
        }
        free(temp);
        return data;
    }
};
int main()
{
    Queue qu;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        qu.EnQueue(ele);
    }
    cout << qu.DeQueue() << endl;
    cout << qu.DeQueue() << endl;
    qu.EnQueue(100);
}