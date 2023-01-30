#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
Node *CreateNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    // return newNode;
}
void Push(int data)
{
    Node *newNode = CreateNode(data);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    free(temp);
}
void Pop()
{
    if (head == NULL)
    {
        cout << "The stack is Empty " << endl;
        return;
    }
    head = head->next;
}
int Peek()
{
    if (head == NULL)
    {
        cout << "The stack is Empty " << endl;
        return -1;
    }
    return head->data;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        Push(ele);
    }
    cout << Peek() << endl;
}
