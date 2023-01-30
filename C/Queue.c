#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
struct Queue
{
    int front, rear;
    int size;
    unsigned capacity;
    int *array;
};
struct Queue *Intitialize(unsigned capacity)
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = 0;
    queue->size = 0;
    queue->rear = capacity - 1;
    queue->capacity = capacity;
    queue->array = (int *)malloc(sizeof(int) * capacity);
    return queue;
}
int isFull(struct Queue *queue)
{
    if (queue->size == queue->capacity)
        return 1;
    else
        return 0;
}
int isEmpty(struct Queue *queue)
{
    if (queue->size == 0)
        return 1;
    else
        return 0;
}
void Enqueue(struct Queue *queue, int data)
{
    if (isFull(queue))
    {
        printf("the queue is full no further elements can be added ");
        return;
    }
    queue->rear = (queue->rear + 1) % (queue->capacity);
    queue->array[queue->rear] = data;
    queue->size++;
    // printf("The element is successfully added ");
}
int Dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("The queue is empty no more element can be added ");
        return -1;
    }
    int element = queue->array[queue->front];
    queue->front = (queue->front + 1) % (queue->capacity);
    queue->size--;
    return element;
}
int FrontElement(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("The queue is Empty : ");
        return -1;
    }
    return queue->array[queue->front];
}
int RearElement(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("The queue is Empty : ");
        return -1;
    }
    return queue->array[queue->rear];
}
void Display(struct Queue *queue)
{
    for (int i = 0; i < queue->size; i++)
    {
        printf("%d ", queue->array[(queue->front + i) % (queue->capacity)]);
    }
    printf("\n");
}
int main()
{
    struct Queue *queue = Intitialize(100);
    Enqueue(queue, 10);
    Enqueue(queue, 30);
    Display(queue);
    Enqueue(queue, 50);
    Display(queue);
    Dequeue(queue);
    Display(queue);
}