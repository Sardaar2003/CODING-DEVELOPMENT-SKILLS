#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
Node *tail = NULL;
void Insertion_at_the_beginning(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    tail->next = head;
}
void Insertion_at_the_end(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    tail->next = head;
}
void Insertion_at_the_middle(int data, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;
    if (temp->next == NULL)
    {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
        return;
    }
    else
    {
        int count = 1;
        while (count++ < position - 1 && temp->next != head)
        {
            temp = temp->next;
        }
        if (temp->next == head)
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void Deletion_at_the_Beginning()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "No Element is Present " << endl;
        return;
    }
    head = head->next;
    tail->next = head;
    free(temp);
}
void Deletion_at_the_End()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "No Element is present " << endl;
        return;
    }
    if (temp->next == NULL)
    {
        head = NULL;
        cout << "No Element exits" << endl;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    Node *temp1 = tail;
    temp->next = head;
    tail = temp;
    free(temp1);
}
void Deletion_at_the_Middle(int position)
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "No Element is present " << endl;
        return;
    }
    if (temp->next == NULL)
    {
        head = NULL;
        cout << "No Element exits" << endl;
        return;
    }
    int count = 1;
    while (count++ < position && temp->next != head)
    {
        temp = temp->next;
    }
    if (temp->next == head)
    {
        Node *temp1 = tail;
        temp->next = head;
        tail = temp;
        free(temp);
    }
    Node *temp1 = temp->next;
    temp->next = temp1->next;
    temp1->next = NULL;

    free(temp1);
}
void Display()
{
    Node *temp1 = head;
    do
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    } while (temp1 != head);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            Insertion_at_the_beginning(data);
        }
        cout << "Insertion at the Beginning " << endl;
        Display();
        cout << endl;
        cout << "Deletion at the Beginning " << endl;
        Deletion_at_the_Beginning();
        Display();
        cout << endl;
        // cout << "Deletion at the End " << endl;
        // Deletion_at_the_End();
        // Display();
        int position;
        cin >> position;
        cout << "Deletion at the position " << endl;
        Deletion_at_the_Middle(position);
        Display();
        // head = NULL;
        // tail = NULL;
        // for (int i = 0; i < n; i++)
        // {
        //     int data;
        //     cin >> data;
        //     Insertion_at_the_end(data);
        // }
        // cout << "Insertion at the End " << endl;
        // Display();
        // int position;
        // int value;
        // cin >> position >> value;
        // Insertion_at_the_middle(value, position);
        // cout << "Insertion at the middle of the node : " << endl;
        // Display();
    }
}