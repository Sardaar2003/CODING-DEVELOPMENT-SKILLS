#include <bits/stdc++.h>
using namespace std;
struct Jobs
{
    int id;
    int deadline;
    int profit;
};
bool comp(Jobs a, Jobs b)
{
    return (a.profit > b.profit);
}
void jobSequence(Jobs jobs[], int size)
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
    int totalProfit = 0;
    for (int i = 0; i < size; i++)
    {
        if (slot[i])
        {
            cout << jobs[result[i]].id << " ";
            totalProfit += jobs[result[i]].profit;
        }
    }
    cout << endl;
    cout << "The total Profit : " << totalProfit << endl;
}
int main()
{
    int size;
    cin >> size;
    Jobs jobSeq[size];
    int ID;
    int DeadLine;
    int Profit;
    for (int i = 0; i < size; i++)
    {
        cin >> ID >> DeadLine >> Profit;
        jobSeq[i].id = ID;
        jobSeq[i].deadline = DeadLine;
        jobSeq[i].profit = Profit;
    }
    jobSequence(jobSeq, size);
}