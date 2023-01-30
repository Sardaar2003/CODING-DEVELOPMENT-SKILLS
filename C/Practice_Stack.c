#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};
struct Stack *CreateStack(unsigned capacity)
{
    struct Stack *newStack = (struct Stack *)malloc(sizeof(struct Stack));
    newStack->capacity = capacity;
    newStack->top = -1;
    newStack->array = (int *)malloc(sizeof(int) * capacity);
    return newStack;
}
int isFull(struct Stack *st)
{
    if (st->top + 1 == st->capacity)
        return 1;
    else
        return 0;
}
int isEmpty(struct Stack *st)
{
    if (st->top == -1)
        return 1;
    else
        return 0;
}
void Push(struct Stack *st, int data)
{
    if (isFull(st))
    {
        printf("The stack is Full.");
        return;
    }
    st->top = st->top + 1;
    st->array[st->top] = data;
}
int Pop(struct Stack *st)
{
    if (isEmpty(st))
    {
        printf("The stack is Empty  ");
        return -1;
    }
    int element = st->array[st->top];
    st->top++;
    return element;
}
int Top(struct Stack *st)
{
    if (isEmpty(st))
    {
        printf("The stack is Empty ");
        return -1;
    }
    return st->array[st->top];
}
int main()
{
    struct Stack *stack = CreateStack(5);
    Push(stack, 12);
    Push(stack, 34);
    Push(stack, 57);
    Push(stack, 25);
    printf("%d", Top(stack));
    printf("%d", Pop(stack));
    printf("%d", Top(stack));
}