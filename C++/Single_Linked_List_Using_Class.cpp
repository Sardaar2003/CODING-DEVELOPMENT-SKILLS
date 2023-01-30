#include <bits/stdc++.h>
using namespace std;
class SLLNode
{
public:
    int data;
    SLLNode *next;
    SLLNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class SinglyLinkedList
{
public:
    SLLNode *head;
    SinglyLinkedList()
    {
        this->head = nullptr;
    }
    void Insertion_at_the_Beginning(int data)
    {
        SLLNode *newNode = new SLLNode(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        // this->head = newNode;
    }
    void Insertion_at_the_End(int data)
    {
        SLLNode *newNode = new SLLNode(data);
        SLLNode *temp = head;
        if (temp == nullptr)
        {
            head = newNode;
            return;
        }
        else
        {
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void Insertion_at_the_Position(int data, int position)
    {
        SLLNode *newNode = new SLLNode(data);
        SLLNode *temp = head;
        int count = 1;
        if (temp == nullptr)
        {
            head = newNode;
            return;
        }
        else
        {
            while (count < position && temp->next != nullptr)
            {
                count++;
                temp = temp->next;
            }
            if (temp->next == nullptr)
            {
                temp->next = newNode;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    void Deletion_at_the_Beginning()
    {
        SLLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element is Present" << endl;
            return;
        }
        // if (temp->next = nullptr)
        // {
        //     head = nullptr;
        //     free(temp);
        //     return;
        // }
        head = head->next;
        free(temp);
    }
    void Deletion_At_the_End()
    {
        SLLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element is Present" << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            head = nullptr;
            free(temp);
            return;
        }
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        SLLNode *temp1 = temp->next;
        temp->next = nullptr;
        free(temp1);
    }
    void Deletion_at_the_position(int position)
    {
        SLLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element is Present" << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            head = nullptr;
            free(temp);
            return;
        }
        int count = 1;
        while (temp->next != nullptr && count++ < position - 1)
        {
            temp = temp->next;
        }
        SLLNode *temp1 = temp->next;
        temp->next = temp1->next;
        temp1->next = nullptr;
        free(temp1);
    }
};
void Display(SLLNode *head)
{
    SLLNode *temp = head;
    while (temp != nullptr)
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
        SinglyLinkedList *llst = new SinglyLinkedList();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            llst->Insertion_at_the_Beginning(data);
        }
        cout << "Insertion at the beginning : " << endl;
        Display(llst->head);
        cout << "Deletion at the Beginning " << endl;
        llst->Deletion_at_the_Beginning();
        Display(llst->head);
        cout << "Deletion at the End " << endl;
        llst->Deletion_At_the_End();
        Display(llst->head);
        int position;
        cin >> position;
        cout << "Deletion at the Position " << endl;
        llst->Deletion_at_the_position(position);
        Display(llst->head);

        // SinglyLinkedList *list = new SinglyLinkedList();
        // for (int i = 0; i < n; i++)
        // {
        //     int data;
        //     cin >> data;
        //     list->Insertion_at_the_End(data);
        // }
        // cout << "Insertion at the End" << endl;
        // Display(list->head);
        // int position, value;
        // cin >> position >> value;
        // llst->Insertion_at_the_Position(value, position);
        // cout << "Insertion at the position in the first list" << endl;
        // Display(llst->head);
        // list->Insertion_at_the_Position(value, position);
        // cout << "Insertion at the position in the second list" << endl;
        // Display(llst->head);
    }
}