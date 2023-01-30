#include <bits/stdc++.h>
using namespace std;
class CLLNode
{
public:
    int data;
    CLLNode *next;
    CLLNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class CLLOperation
{
public:
    CLLNode *head;
    CLLNode *tail;

    CLLOperation()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }
    void Insertion_at_the_Beginning(int data)
    {
        CLLNode *newNode = new CLLNode(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void Insertion_at_the_End(int data)
    {
        CLLNode *newNode = new CLLNode(data);
        CLLNode *temp = head;
        if (temp == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }
    void Insertion_at_the_Middle(int data, int position)
    {
        CLLNode *newNode = new CLLNode(data);
        CLLNode *temp = head;
        if (temp == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        if (temp->next == head)
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void Deletion_at_the_Beginning()
    {
        CLLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Elements Exists" << endl;
            return;
        }
        head = head->next;
        tail->next = head;
        temp->next = nullptr;

        free(temp);
    }
    void Deletion_at_the_End()
    {
        CLLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element exists" << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            head = nullptr;
            cout << "No Elements exists" << endl;
            return;
        }
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        temp->next = head;
        tail = temp;
    }
    void Deletion_at_the_Position(int Position)
    {
        CLLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element exists" << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            head = nullptr;
            cout << "No Elements exists" << endl;
            return;
        }
        int count = 1;
        while (count++ < Position - 1 && temp->next != head)
        {
            temp = temp->next;
        }
        if (temp->next == head)
        {
            CLLNode *temp1 = tail;
            temp->next = head;
            tail = temp;
            free(temp1);
        }
        CLLNode *temp1 = temp->next;
        temp->next = temp1->next;
        temp1->next = NULL;
        free(temp1);
    }
};
void Display(CLLNode *head)
{
    CLLNode *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;
        CLLOperation *llist1 = new CLLOperation();
        for (int i = 0; i < b; i++)
        {
            int data;
            cin >> data;
            llist1->Insertion_at_the_Beginning(data);
        }
        cout << "Insertion at the Beginning " << endl;
        Display(llist1->head);
        cout << endl;
        cout << "Deletion at the Beginning " << endl;
        llist1->Deletion_at_the_Beginning();
        Display(llist1->head);
        CLLOperation *llist2 = new CLLOperation();
        for (int i = 0; i < b; i++)
        {
            int data;
            cin >> data;
            llist2->Insertion_at_the_End(data);
        }
        cout << "Insertion at the End " << endl;
        Display(llist2->head);
        cout << endl;
        cout << "Deletion at the End " << endl;
        llist1->Deletion_at_the_End();
        Display(llist1->head);
        int position;
        int value;
        cin >> position >> value;
        cout << "Insertion at the middle : " << endl;
        llist1->Insertion_at_the_Middle(value, position);
        Display(llist1->head);
        cout << endl;
        cin >> position >> value;
        cout << "Insertion at the middle llist2 : " << endl;
        llist2->Insertion_at_the_Middle(value, position);
        Display(llist2->head);
        cout << endl;
        cin >> position;
        llist1->Deletion_at_the_Position(position);
        Display(llist1->head);
        llist2->Deletion_at_the_Position(position);
        Display(llist2->head);
    }
}