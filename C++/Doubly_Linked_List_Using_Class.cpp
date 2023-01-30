#include <bits/stdc++.h>
using namespace std;
class DDLNode
{
public:
    int data;
    DDLNode *next;
    DDLNode *prev;
    DDLNode(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
class DDLOperation
{
public:
    DDLNode *head;
    DDLOperation()
    {
        this->head = nullptr;
    }
    void Insertion_at_the_Beginning(int data)
    {
        DDLNode *newNode = new DDLNode(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        else
        {

            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void Insertion_at_the_End(int data)
    {
        DDLNode *newNode = new DDLNode(data);
        DDLNode *temp = head;
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
            newNode->prev = temp;
        }
    }
    void Insertion_at_the_position(int data, int position)
    {
        DDLNode *newNode = new DDLNode(data);
        DDLNode *temp = head;
        if (temp == nullptr)
        {
            head = newNode;
            return;
        }
        int count = 1;
        while (count++ < position && temp->next != nullptr)
        {
            temp = temp->next;
        }
        if (temp->next == nullptr)
        {
            temp->next = newNode;
            newNode->prev = temp;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
    void Deletion_at_the_Beginning()
    {
        DDLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element is Present " << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            head = nullptr;
            cout << "Element is deleted and now no element is present " << endl;
            return;
        }
        head = head->next;
        temp->next = nullptr;
    }
    void Deletion_at_the_end()
    {
        DDLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element is present : " << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            cout << "The element has been deleted and no element is present " << endl;
            head = nullptr;
            return;
        }
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        DDLNode *temp1 = temp->next;
        temp1 = nullptr;
        temp1->prev = nullptr;
        free(temp1);
    }
    void Deletion_at_the_Position(int position)
    {
        DDLNode *temp = head;
        if (temp == nullptr)
        {
            cout << "No Element is present : " << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            cout << "The element has been deleted and no element is present " << endl;
            head = nullptr;
            return;
        }
        int count = 1;
        while (count++ < position - 1 && temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->next->prev = temp;
        temp->next->prev = nullptr;
        temp->next->next = nullptr;
        // free(temp);
    }
};
void Display(DDLNode *head)
{
    DDLNode *temp = head;
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
        int n;
        DDLOperation *llist1 = new DDLOperation();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            llist1->Insertion_at_the_Beginning(data);
        }
        cout << "Insertion at the Beginning : " << endl;
        Display(llist1->head);
        cout << "Deletion at the Beginning : " << endl;
        llist1->Deletion_at_the_Beginning();
        Display(llist1->head);
        // cout << "Deletion at the End : " << endl;
        // llist1->Deletion_at_the_end();
        // Display(llist1->head);
        int position;
        cin >> position;
        cout << "Deletion at the specific Position " << endl;
        llist1->Deletion_at_the_Position(position);
        Display(llist1->head);
        DDLOperation *llist2 = new DDLOperation();
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            llist2->Insertion_at_the_End(data);
        }
        cout << "Insertion at the End : " << endl;
        Display(llist2->head);
        cout << "Deletion at the Beginning  llist 2 : " << endl;
        llist2->Deletion_at_the_Beginning();
        Display(llist2->head);
        // int position;
        cin >> position;
        cout << "Deletion at the specific Position llist 2 " << endl;
        llist2->Deletion_at_the_Position(position);
        Display(llist2->head);
        // cout << "Deletion at the End  llist 2: " << endl;
        // llist2->Deletion_at_the_end();
        // Display(llist2->head);
        // int value;
        // int position;
        // cin >> position >> value;
        // llist1->Insertion_at_the_position(value, position);
        // llist2->Insertion_at_the_position(value, position);
        // cout << "Insertion at the Position llist 1 : " << endl;
        // Display(llist1->head);
        // cout << "Insertion at the Position llist 2 : " << endl;
        // Display(llist2->head);
    }
}