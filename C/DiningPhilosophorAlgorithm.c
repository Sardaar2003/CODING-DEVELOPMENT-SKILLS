#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define N 5

sem_t eating;

typedef struct
{
    int id;
    pthread_mutex_t lock;
    int left_fork;
    int right_fork;
} philosopher_t;

void init_philosopher(philosopher_t *p, int id, int left_fork, int right_fork)
{
    p->id = id;
    pthread_mutex_init(&p->lock, NULL);
    p->left_fork = left_fork;
    p->right_fork = right_fork;
}

void pickup_forks(philosopher_t *p)
{
    pthread_mutex_lock(&p->lock);
    sem_wait(&eating);
    pthread_mutex_lock(&p->left_fork);
    pthread_mutex_lock(&p->right_fork);
    pthread_mutex_unlock(&p->lock);
}

void return_forks(philosopher_t *p)
{
    pthread_mutex_lock(&p->lock);
    sem_post(&eating);
    pthread_mutex_unlock(&p->left_fork);
    pthread_mutex_unlock(&p->right_fork);
    pthread_mutex_unlock(&p->lock);
}

void *philosopher(void *arg)
{
    philosopher_t *p = (philosopher_t *)arg;
    while (1)
    {
        printf("Philosopher %d is thinking\n", p->id);
        sleep(rand() % 5 + 1);
        printf("Philosopher %d is hungry\n", p->id);
        pickup_forks(p);
        printf("Philosopher %d is eating\n", p->id);
        sleep(rand() % 5 + 1);
        return_forks(p);
    }
}

int main()
{
    pthread_t threads[N];
    philosopher_t philosophers[N];
    sem_init(&eating, 0, N - 1);
    pthread_mutex_t forks[N];
    int i;
    for (i = 0; i < N; i++)
    {
        pthread_mutex_init(&forks[i], NULL);
    }
    for (i = 0; i < N; i++)
    {
        init_philosopher(&philosophers[i], i, &forks[i], &forks[(i + 1) % N]);
        pthread_create(&threads[i], NULL, philosopher, (void *)&philosophers[i]);
    }
    for (i = 0; i < N; i++)
    {
        pthread_join(threads[i], NULL);
    }
    return 0;
}
