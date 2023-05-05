#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int *ticket;   // ticket numbers for each process
int *choosing; // flags for indicating when process is choosing a ticket
int count = 0; // shared variable to increment

int n;                 // number of processes
pthread_mutex_t mutex; // mutex lock for accessing shared variables

void *process(void *arg)
{
    int id = *(int *)arg;
    for (int i = 0; i < 10; i++)
    {
        // choose a ticket number
        choosing[id] = 1;
        int max_ticket = 0;
        for (int j = 0; j < n; j++)
        {
            if (ticket[j] > max_ticket)
            {
                max_ticket = ticket[j];
            }
        }
        ticket[id] = max_ticket + 1;
        choosing[id] = 0;
        // wait for all processes to choose their ticket numbers
        for (int j = 0; j < n; j++)
        {
            while (choosing[j])
            {
                // busy wait until process j has chosen its ticket number
            }
            while (ticket[j] != 0 && (ticket[j] < ticket[id] || (ticket[j] == ticket[id] && j < id)))
            {
                // busy wait until process j with a smaller or equal ticket number finishes
            }
        }
        // critical section
        printf("Process %d entered critical section\n", id);
        count++;
        printf("Process %d incremented count to %d\n", id, count);
        // end of critical section
        ticket[id] = 0; // release the ticket
    }
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s n\n", argv[0]);
        return 1;
    }
    n = atoi(argv[1]);
    ticket = malloc(n * sizeof(int));
    choosing = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ticket[i] = 0;
        choosing[i] = 0;
    }
    pthread_t thread[n];
    int id[n];
    for (int i = 0; i < n; i++)
    {
        id[i] = i;
        pthread_create(&thread[i], NULL, process, &id[i]);
    }
    for (int i = 0; i < n; i++)
    {
        pthread_join(thread[i], NULL);
    }
    printf("Final value of count: %d\n", count);
    return 0;
}
