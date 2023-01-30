#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int capacity;
    int top;
    int *array;

public:
    Stack(int capa)
    {
        this->capacity = capa;
        array = new int[capacity];
        top = -1;
    }
    int size() { return top + 1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top + 1 == capacity; }
    void Push(int data)
    {
        if (isFull())
        {
            cout << "Over Flow" << endl;
            return;
        }
        top++;
        array[top] = data;
    }
    int Peek()
    {
        if (isEmpty())
        {
            cout << "Empty " << endl;
            return -1;
        }
        return array[top];
    }
    int Pop()
    {
        if (isEmpty())
        {
            cout << "Under Flow" << endl;
            return -1;
        }
        return array[top--];
    }
};
int main()
{
    int capacity, n;
    cin >> capacity >> n;
    Stack st(capacity);
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        st.Push(element);
    }
    cout << "Top Of the Stack : " << st.Peek() << endl;
    cout << "Size Of the Stack : " << st.size() << endl;
    cout << "Is Empty Stack : " << st.isEmpty() << endl;
    cout << "Is Full Stack : " << st.isFull() << endl;
    cout << "Poping out all the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << st.Pop() << endl;
    }
}