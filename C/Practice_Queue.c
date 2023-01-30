#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int capacity;
    int front, rear;
    int size;
    int *array;
};
struct Queue *CreateQueue(int capacity)
{
    struct Queue *newQueue = (struct Queue *)malloc(sizeof(struct Queue));
    newQueue->front = 0;
    newQueue->rear = capacity - 1;
    newQueue->capacity = capacity;
    newQueue->size = 0;
    newQueue->array = (int *)malloc(sizeof(int) * capacity);
    return newQueue;
}
int isFull(struct Queue *newQueue)
{
    if (newQueue->size == newQueue->capacity)
        return 1;
    else
        return 0;
}
int isEmpty(struct Queue *newQueue)
{
    if (newQueue->size == 0)
        return 1;
    else
        return 0;
}
void EnQueue(struct Queue *newQueue, int data)
{
    if (isFull(newQueue))
    {
        printf("The Queue is Full. Further more elements cannot be added ");
        return;
    }
    newQueue->rear = (newQueue->rear + 1) % (newQueue->capacity);
    newQueue->array[newQueue->rear] = data;
    newQueue->size++;
}
void deQueue(struct Queue *newQueue)
{
    if (isEmpty(newQueue))
    {
        printf("The Queue is Empty. Further more elements can't be poped out ");
        return;
    }
    newQueue->front = (newQueue->front + 1) % (newQueue->capacity);
    newQueue->size--;
}
void Display(struct Queue *newQueue)
{
    if (isEmpty(newQueue))
    {
        printf("No element in the Queue ");
        return;
    }
    for (int i = 0; i < newQueue->size; i++)
    {
        newQueue->front = (newQueue->front + i) % (newQueue->capacity);
        printf("%d ", newQueue->array[newQueue->front]);
    }
}
int Front(struct Queue *newQueue)
{
    if (isEmpty(newQueue))
        return -1;
    else
        return newQueue->array[newQueue->front];
}
int Rear(struct Queue *newQueue)
{
    if (isEmpty(newQueue))
    {
        return -1;
    }
    else
        return newQueue->array[newQueue->rear];
}
int main()
{
    struct Queue *newQueue = CreateQueue(5);
    EnQueue(newQueue, 10);
    EnQueue(newQueue, 20);
    EnQueue(newQueue, 40);
    EnQueue(newQueue, 180);
    EnQueue(newQueue, 1032);
}