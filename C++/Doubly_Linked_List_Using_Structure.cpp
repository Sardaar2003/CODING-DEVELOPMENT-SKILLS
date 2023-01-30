#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
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
    newNode->prev = NULL;
    head->prev = newNode;
    head = newNode;
}
void Insertion_at_the_End(int data)
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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void Insertion_at_the_Position(int data, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    int count = 1;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    Node *temp = head;
    if (temp == NULL)
    {
        head = newNode;
        return;
    }

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
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
    // free(temp1);
}
void Deletion_at_the_Beginning()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "The linked list is empty " << endl;
        return;
    }
    if (temp->next == NULL)
    {
        cout << "No element is Present " << endl;
        head = NULL;
        return;
    }
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    free(temp);
}
void Deletion_at_the_End()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "No Element is present in the DLL" << endl;
        return;
    }
    if (temp->next == NULL)
    {
        cout << "The element are deleted and no element is present " << endl;
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    temp->next->prev = NULL;
}
void Deletion_at_the_position(int position)
{
    Node *temp = head;
    if (temp == NULL || temp == nullptr)
    {
        cout << "No Element is present in the DLL" << endl;
        return;
    }
    int count = 1;

    if (temp->next == NULL)
    {
        cout << "The element are deleted and no element is present " << endl;
        head = NULL;
        free(temp);
        return;
    }
    while (count++ < position - 1 && temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    temp->next->next->prev = temp;
    temp->next->prev = NULL;
    temp->next->next = NULL;
}
void Display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        // cout << temp->next << " ";
        // cout << temp->prev << " ";
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
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            Insertion_at_the_Beginning(data);
        }
        cout << "Insertion at the Beginning " << endl;
        Display();
        cout << "Deletion at the Beginning " << endl;
        Deletion_at_the_Beginning();
        Display();
        cout << "Deletion at the End " << endl;
        Deletion_at_the_End();
        Display();
        int position;
        cin >> position;
        cout << "Deletion at the specific Position " << endl;
        Deletion_at_the_position(position);
        Display();
        // head = NULL;
        // for (int i = 0; i < n; i++)
        // {
        //     int data;
        //     cin >> data;
        //     Insertion_at_the_End(data);
        // }
        // cout << "Insertion at the End " << endl;
        // Display();
        // int position;
        // int value;
        // cin >> position >> value;
        // Insertion_at_the_Position(value, position);
        // cout << "Insertion at the Position : " << endl;
        // Display();
        // head = NULL;
    }
}