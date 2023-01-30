#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
void Insertion_Beginning(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void Insertion_At_End(int data)
{
    Node *temp = head;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
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
}
void Insertion_In_The_Middle(int data, int position)
{
    Node *temp = head;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    int count = 1;
    if (temp == NULL)
    {
        head = newNode;
        return;
    }
    while (count < position && temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        temp->next = newNode;
        // cout << "Invalid Position " << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void Display()
{
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void Deletion_At_the_Beginning()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "Linked List is Empty " << endl;
        return;
    }
    head = head->next;
    free(temp);
}
void Deletion_At_the_End()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "Linked List is Empty " << endl;
        return;
    }
    if (temp->next == NULL)
    {
        head = NULL;
        free(temp);

        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *temp1 = temp->next;
    temp->next = NULL;
    free(temp1);
}
void Deletion_at_the_position(int position)
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "Linked List is Empty " << endl;
        return;
    }
    if (temp->next == NULL)
    {
        head = NULL;
        free(temp);
        return;
    }
    int count = 1;
    while (temp->next != NULL && count++ < position - 1)
    {
        temp = temp->next;
    }
    Node *temp1 = temp->next;
    temp->next = temp1->next;
    temp1->next = NULL;
    free(temp1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int data;

        for (int i = 0; i < n; i++)
        {
            cin >> data;
            Insertion_Beginning(data);
        }
        cout << "Insertion at the Begining" << endl;
        Display();
        // cout << "Deletion at the Beginning : " << endl;
        // Deletion_At_the_Beginning();
        // Display();
        // cout << endl;
        cout << "Deletion at the End : " << endl;
        Deletion_At_the_End();
        Display();
        cout << endl;
        // head = NULL;
        int position;
        cin >> position;
        cout << "Deletion at the Position : " << endl;
        Deletion_at_the_position(position);
        Display();
        head = NULL;
        // head = NULL;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> data;
        //     Insertion_At_End(data);
        // }
        // cout << "Insertion at the End" << endl;
        // Display();
        // cout << endl;

        // int position;

        // int value;
        // cin >> position >> value;
        // Insertion_In_The_Middle(value, position);
        // cout << "Insertion in the Middle " << endl;
        // Display();
        // cout << endl;
        // head = NULL;
    }
}