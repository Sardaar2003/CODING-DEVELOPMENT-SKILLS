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
}

void Push(int data)
{
    Node *newNode = CreateNode(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
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
        cout << "the stack is empty : " << endl;
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
    for (int i = 0; i < n; i++)
    {
        cout << Peek() << " ";
        Pop();
    }
    //     // int element;
    //     // cin >> element;
    //     Pop();
    // cout << Peek() << endl;
    return 0;
}