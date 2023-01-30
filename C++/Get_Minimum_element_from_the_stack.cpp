#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int capacity;
    int top;
    int *array;

public:
    Stack()
    {
        this->capacity = 1000000;
        top = -1;
        array = new int[capacity];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull() { return top + 1 == capacity; }
    void Push(int data)
    {
        if (isFull())
        {
            // cout << "No more element can be added";
        }
        top++;
        array[top] = data;
    }
    int Pop()
    {
        if (isEmpty())
        {
            // cout << "Stack is empty : " << endl;
            return -1;
        }
        int ele = array[top];
        top--;
        return ele;
    }
    int Peek()
    {
        if (isEmpty())
        {
            // cout << "Stack is Empty" << endl;
            return -1;
        }
        return array[top];
    }
};
int main()
{
    int query;
    cin >> query;
    Stack obj1;
    Stack obj2;
    for (int i = 0; i < query; i++)
    {
        int queryValue;
        cin >> queryValue;
        if (queryValue == 1)
        {
            int value;
            cin >> value;
            if (obj2.isEmpty())
            {
                obj2.Push(value);
            }
            else if (!obj2.isEmpty())
            {
                if (value < obj2.Peek())
                {
                    obj2.Push(value);
                }
                else
                {
                    obj2.Push(obj2.Peek());
                }
            }
            obj1.Push(value);
        }
        else if (queryValue == 2)
        {
            if (obj1.isEmpty() && obj2.isEmpty())
            {
                cout << -1 << endl;
            }
            obj1.Pop();
            obj2.Pop();
        }
        else if (queryValue == 3)
        {
            cout << obj1.Peek() << endl;
        }
        else if (queryValue == 4)
        {
            cout << obj2.Peek() << endl;
        }
    }
}