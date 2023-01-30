#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class Stack
{
    Node *head;

public:
    Stack() { head = NULL; }
    void Push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    int isEmpty() { return head == NULL; }
    int Peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return head->data;
    }
    int Pop()
    {
        Node *temp;
        if (head == NULL)
        {
            cout << "Stack is UnderFlow" << endl;
            return -1;
        }
        int element = head->data;
        temp = head;
        head = head->next;
        free(temp);
        return element;
    }
};
int main()
{
    int n;
    cin >> n;
    Stack st;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        st.Push(elem);
    }
    cout << "Top of the stack : " << st.Peek() << endl;
    // cout << "Size of the stack : " << sizeFunction() << endl;
    cout << "Poping out all the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << st.Pop() << endl;
    }
    return 0;
    // cout << "Size of the stack : " << sizeFunction() << endl;
}