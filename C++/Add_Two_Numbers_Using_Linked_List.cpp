#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    Node *next;
} Node;
Node *head = NULL;
Node *CreateNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
}

void Insertion_at_the_end(int data)
{
    Node *newNode = CreateNode(data);
    Node *temp = head;
    if (temp == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
Node *Reverse(Node *head)
{
    Node *nextval;
    Node *current = head;
    Node *previous = NULL;
    while (current)
    {
        nextval = current->next;
        current->next = previous;
        previous = current;
        current = nextval;
    }
    return previous;
}
void PrintData(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int testCases;
    // Node *head=NULL;
    cin >> testCases;
    while (testCases--)
    {
        int size;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            int element;
            cin >> element;
            Insertion_at_the_end(element);
        }
        Reverse(head);
        PrintData(head);
    }
}