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
void Insertion_at_the_Beginning(int data)
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
void ReverseLinkedList()
{
    Node *prev = NULL;
    Node *current = head;
    Node *nextD;
    while (current != NULL)
    {
        nextD = current->next;
        current->next = prev;
        prev = current;
        current = nextD;
    }
    Node *temp = prev;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// 84<-35<-54<-42<-32<-12

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        Insertion_at_the_Beginning(ele);
    }
    ReverseLinkedList();
}