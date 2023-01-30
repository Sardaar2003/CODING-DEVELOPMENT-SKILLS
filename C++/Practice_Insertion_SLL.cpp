#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
void Insertion_at_the_beginning(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void Insertion_at_the_End(int data)
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
void Insertion_at_the_Middle(int data, int position)
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
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void Deletion_at_the_Beginning()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "No Elements are present " << endl;
        return;
    }
    if (temp->next == NULL)
    {
        head = NULL;
        free(temp);
        return;
    }
    head = head->next;
    free(temp);
}
void Deletion_at_the_end()
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "No Elements are present " << endl;
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
        cout << "No Elements are present " << endl;
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
void Display()
{
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int t;
    cin >> t;
    int data;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            Insertion_at_the_beginning(data);
        }
        cout << "Insertion at the Beginning " << endl;
        Display();
        cout << endl;
        cout << "Deletion at the Beginning : " << endl;
        Deletion_at_the_Beginning();
        Display();
        cout << endl;
        cout << "Deletion at the End : " << endl;
        Deletion_at_the_end();
        Display();
        cout << endl;
        int position;
        cin >> position;
        cout << "Deletion at the Position : " << endl;
        Deletion_at_the_position(position);
        Display();
        cout << endl;

        // head = NULL;
        // // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     // int data;
        //     cin >> data;
        //     Insertion_at_the_End(data);
        // }
        // cout << "Insertion at the End " << endl;
        // Display();
        // cout << endl;
        // int position;
        // int value;
        // cin >> position >> value;
        // Insertion_at_the_Middle(value, position);
        // cout << "Insertion at the Middle : " << endl;
        // Display();
        // head = NULL;
    }
}
