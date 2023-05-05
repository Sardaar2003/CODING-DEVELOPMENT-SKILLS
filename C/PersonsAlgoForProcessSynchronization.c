#include <stdio.h>
#include <pthread.h>

int flag[2] = {0, 0}; // flags for each process
int turn = 0;         // variable to track whose turn it is
int count = 0;        // shared variable to increment

void *process(void *arg)
{
    int id = *(int *)arg;
    for (int i = 0; i < 10; i++)
    {
        flag[id] = 1;  // set flag[id] to indicate process is ready
        turn = 1 - id; // set turn to the other process
        while (flag[1 - id] && turn == 1 - id)
        {
            // busy wait until other process is not ready
        }
        // critical section
        printf("Process %d entered critical section\n", id);
        count++;
        printf("Process %d incremented count to %d\n", id, count);
        // end of critical section
        flag[id] = 0; // reset flag[id]
    }
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread[2];
    int id[2] = {0, 1};
    pthread_create(&thread[0], NULL, process, &id[0]);
    pthread_create(&thread[1], NULL, process, &id[1]);
    pthread_join(thread[0], NULL);
    pthread_join(thread[1], NULL);
    printf("Final value of count: %d\n", count);
    return 0;
}
