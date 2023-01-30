#include <bits/stdc++.h>
using namespace std;
typedef struct stack
{
    int capacity;
    int top;
    int *array;
} Stack;

Stack *intitial(int capacity)
{
    Stack *st = (Stack *)malloc(sizeof(Stack));
    st->capacity = capacity;
    st->top = -1;
    st->array = (int *)malloc(sizeof(int) * capacity);
}
bool isEmpty(Stack *stackData)
{
    if (stackData->top == -1)
        return true;
    else
        return false;
}
bool isFull(Stack *stackData)
{
    if (stackData->top == stackData->capacity - 1)
        return true;
    else
        return false;
}
int StackSize(Stack *stackData)
{
    return stackData->top + 1;
}
void Push(Stack *stackData, int data)
{
    if (isFull(stackData))
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    stackData->top = stackData->top + 1;
    stackData->array[stackData->top] = data;
}
int Peek(Stack *stackData)
{
    if (isEmpty(stackData))
    {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    return stackData->array[stackData->top];
}
int Pop(Stack *stackData)
{
    if (isEmpty(stackData))
    {
        cout << "No Element is Present" << endl;
        return -1;
    }
    int del = stackData->array[stackData->top];
    stackData->top = stackData->top - 1;
    return del;
}
int main()
{
    int capacity;
    int numberOfElements;
    cin >> capacity >> numberOfElements;
    Stack *St = intitial(capacity);
    for (int i = 0; i < numberOfElements; i++)
    {
        int number;
        cin >> number;
        Push(St, number);
    }
    cout << "Top Of the Stack : " << Peek(St) << endl;
    cout << "Size Of the Stack : " << StackSize(St) << endl;
    cout << "Is Empty Stack : " << isEmpty(St) << endl;
    cout << "Is Full Stack : " << isFull(St) << endl;
    cout << "Poping out all the elements" << endl;
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << Pop(St) << endl;
    }
}