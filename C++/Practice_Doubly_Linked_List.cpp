#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;
Node *head = NULL;
void Insertion_at_the_Beginning(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (head == NULL)
    {
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    newNode->data = data;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void Insertion_at_the_end(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    Node *temp = head;
    if (temp == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void Insertion_at_the_position(int data, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    Node *temp = head;
    if (temp == NULL)
    {
        head = newNode;
        return;
    }
    int count = 1;
    while (count++ < position && temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        temp->next = newNode;
        newNode->prev = temp;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    temp->next->prev = newNode;
}
void Display()
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
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            int data;
            cin >> data;
            Insertion_at_the_Beginning(data);
        }
        cout << "Insertion at the Beginning : " << endl;
        Display();
        head = NULL;
        for (int i = 0; i < b; i++)
        {
            int data;
            cin >> data;
            Insertion_at_the_end(data);
        }
        cout << "Insertion at the End : " << endl;
        Display();
        // head = NULL;
        int position;
        int value;
        cin >> position >> value;
        Insertion_at_the_position(value, position);
        cout << "Insertion at the Position : " << endl;
        Display();
    }
}