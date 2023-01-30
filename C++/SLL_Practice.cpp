#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
void Insertion_at_the_Beginning(Node *head, int data)
{
    Node *newNode;
    newNode->data = data;
    newNode->next = NULL;
    Node *temp = head;
    if (temp == NULL)
    {
        temp = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        Insertion_at_the_Beginning(head, ele);
        Display(head);
    }
}