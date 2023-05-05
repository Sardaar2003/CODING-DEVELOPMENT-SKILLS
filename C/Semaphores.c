#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
sem_t empty, full, mutex;

void *producer(void *arg)
{
    int i = 0;
    while (1)
    {
        sem_wait(&empty); // wait for an empty slot in the buffer
        sem_wait(&mutex); // acquire the mutex to access the buffer
        buffer[i] = i;    // put item in buffer
        i = (i + 1) % BUFFER_SIZE;
        sem_post(&mutex); // release the mutex
        sem_post(&full);  // signal that a slot is now full
    }
    pthread_exit(NULL);
}

void *consumer(void *arg)
{
    int i = 0;
    while (1)
    {
        sem_wait(&full);           // wait for a full slot in the buffer
        sem_wait(&mutex);          // acquire the mutex to access the buffer
        printf("%d\n", buffer[i]); // print the item
        i = (i + 1) % BUFFER_SIZE;
        sem_post(&mutex); // release the mutex
        sem_post(&empty); // signal that a slot is now empty
    }
    pthread_exit(NULL);
}

int main()
{
    sem_init(&empty, 0, BUFFER_SIZE); // initialize empty semaphore to buffer size
    sem_init(&full, 0, 0);            // initialize full semaphore to 0
    sem_init(&mutex, 0, 1);           // initialize mutex semaphore to 1

    pthread_t producer_thread, consumer_thread;
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);

    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    sem_destroy(&empty);
    sem_destroy(&full);
    sem_destroy(&mutex);

    return 0;
}
