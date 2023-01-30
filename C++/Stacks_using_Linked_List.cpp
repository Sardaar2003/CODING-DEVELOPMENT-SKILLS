#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
int size = 0;
void Push(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        cout << "OverFlow " << endl;
        return;
    }
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    size++;
}
int isEmpty() { return head == NULL; }
int Peek()
{
    if (isEmpty())
    {
        cout << "Stack is Empty : " << endl;
        return -1;
    }
    return head->data;
}
int Pop()
{
    Node *temp;
    if (isEmpty())
    {
        cout << "Stack UnderFlow : " << endl;

        return -1;
    }
    int ele = head->data;
    temp = head;
    head = head->next;
    size--;
    free(temp);
    return ele;
}
int sizeFunction()
{
    return size;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        Push(element);
    }
    cout << "Top of the stack : " << Peek() << endl;
    cout << "Size of the stack : " << sizeFunction() << endl;
    cout << "Poping out all the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Pop() << endl;
    }
    cout << "Size of the stack : " << sizeFunction() << endl;
}