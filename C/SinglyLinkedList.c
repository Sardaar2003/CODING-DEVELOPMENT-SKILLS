#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void Insertion_at_the_Beginning(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    struct Node *temp = head;
    if (temp == NULL)
    {
        temp = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void Display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{

    Insertion_at_the_Beginning(head, 10);
    Insertion_at_the_Beginning(head, 20);
    Insertion_at_the_Beginning(head, 30);
    Display(head);
}