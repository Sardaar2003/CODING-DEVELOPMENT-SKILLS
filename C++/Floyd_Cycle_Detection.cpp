#include <bits/stdc++.h>
using namespace std;
class SingleLinkedListNode
{
public:
    int data;
    SingleLinkedListNode *next;
    SingleLinkedListNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class SingleLinkedList
{

public:
    SingleLinkedListNode *head;
    SingleLinkedListNode *tail;
    SingleLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }
    void Insertion(int node_data)
    {
        SingleLinkedListNode *newNode = new SingleLinkedListNode(node_data);
        if (!this->head)
        {
            this->head = newNode;
        }
        else
        {
            this->tail->next = newNode;
        }
        this->tail = newNode;
    }
};
void PrintLinkedList(SingleLinkedListNode *head)
{
    SingleLinkedListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Free_Linked_List(SingleLinkedListNode *node)
{
    while (node)
    {
        SingleLinkedListNode *temp = node;
        node = node->next;
        free(temp);
    }
}
bool FindingCycle(SingleLinkedListNode *head)
{
    SingleLinkedListNode *slow = head, *fast = head;
    while (slow != nullptr && fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    SingleLinkedList *llist1 = new SingleLinkedList();
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        llist1->Insertion(data);
    }
    llist1->head->next->next->next->next->next = llist1->head->next->next;
    bool value = FindingCycle(llist1->head);
    if (value)
    {
        cout << "Cycle Found " << endl;
    }
    else
    {
        cout << "Cycle not Found " << endl;
    }
}