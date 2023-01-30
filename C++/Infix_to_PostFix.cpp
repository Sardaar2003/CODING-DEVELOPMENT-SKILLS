#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int capacity;
    int top;
    char *array;

public:
    Stack()
    {
        this->capacity = 1000000;
        array = new char[capacity];
        top = -1;
    }
    int size() { return top + 1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top + 1 == capacity; }
    void Push(char data)
    {
        if (isFull())
        {
            cout << "No Space left : " << endl;
            return;
        }
        top++;
        array[top] = data;
    }
    char Peek()
    {
        if (isEmpty())
        {
            cout << "No element is Present : " << endl;
            return 'c';
        }
        return array[top];
    }
    char Pop()
    {
        if (isEmpty())
        {
            cout << "No Element present to be Poped out " << endl;
            return -1;
        }
        char ele = array[top];
        top--;
        return ele;
    }
};
// Precedence function
int Preced(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '-' || c == '+')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void InfixToPostfix(string s)
{
    Stack st;
    st.Push('#');
    int l = s.length();
    string ns;
    for (int i = 0; i < l; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ns += s[i];
        }
        else if (s[i] == '(')
        {
            st.Push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.Peek() != '#' && st.Peek() != '(')
            {
                char c = st.Pop();
                ns += c;
            }
            if (st.Peek() == '(')
            {
                st.Pop();
            }
        }
        else
        {

            while (st.Peek() != '#' && Preced(s[i]) <= Preced(st.Peek()))
            {
                char c = st.Pop();
                ns += c;
            }
            st.Push(s[i]);
        }
    }
    while (st.Peek() != '#')
    {
        char c = st.Pop();
        ns += c;
    }
    cout << ns << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        InfixToPostfix(s);
    }
}