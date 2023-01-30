#include <bits/stdc++.h>
using namespace std;
struct Job
{
    int id;
    int deadline;
    int profit;
};
bool comp(Job a, Job b)
{
    return a.profit > b.profit;
}
void JobsSequencing(Job jobs[], int size)
{
    sort(jobs, jobs + size, comp);
    int result[size];
    bool slot[size];
    for (int i = 0; i < size; i++)
        slot[i] = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = min(size - 1, jobs[i].deadline) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    int totalCost = 0;
    for (int i = 0; i < size; i++)
    {
        if (slot[i])
        {
            cout << " " << jobs[result[i]].id << " ";
            totalCost += jobs[result[i]].profit;
        }
    }
    cout << "The total Cost : " << totalCost << endl;
}
int main()
{
    int size;
    cin >> size;
    Job jobs[size];
    int id, deadline, profit;
    for (int i = 0; i < size; i++)
    {
        cin >> id >> deadline >> profit;
        jobs[i].id = id;
        jobs[i].deadline = deadline;
        jobs[i].profit = profit;
    }
    JobsSequencing(jobs, size);
}