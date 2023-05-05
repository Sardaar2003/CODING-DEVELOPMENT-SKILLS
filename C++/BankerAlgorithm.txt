#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX_PROCESSES = 100;
const int MAX_RESOURCES = 100;

bool isSafeState(vector<int> &available, vector<vector<int>> &allocation, vector<vector<int>> &max, int processes, int resources)
{
    vector<int> need(processes, 0);
    vector<int> work(resources, 0);

    // Initializing work[] = available[]
    for (int i = 0; i < resources; i++)
    {
        work[i] = available[i];
    }

    // Iterate for all processes
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            need[i] = max[i][j] - allocation[i][j];
        }
    }

    // Iterate for all processes
    for (int i = 0; i < processes; i++)
    {
        int j;
        for (j = 0; j < resources; j++)
        {
            if (need[i] > work[j])
            {
                break;
            }
        }

        if (j == resources)
        {
            // Allocating resources
            for (int k = 0; k < resources; k++)
            {
                work[k] += allocation[i][k];
            }

            // Marking the process as finished
            need[i] = -1;
        }
    }

    // Check if all processes are finished
    for (int i = 0; i < processes; i++)
    {
        if (need[i] != -1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int processes, resources;
    cout << "Enter the number of processes: ";
    cin >> processes;
    cout << "Enter the number of resources: ";
    cin >> resources;

    vector<int> available(resources, 0);
    cout << "Enter the available resources: ";
    for (int i = 0; i < resources; i++)
    {
        cin >> available[i];
    }

    vector<vector<int>> max(processes, vector<int>(resources, 0));
    cout << "Enter the maximum resources required by each process: ";
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            cin >> max[i][j];
        }
    }

    vector<vector<int>> allocation(processes, vector<int>(resources, 0));
    cout << "Enter the resources allocated to each process: ";
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            cin >> allocation[i][j];
        }
    }

    if (isSafeState(available, allocation, max, processes, resources))
    {
        cout << "The system is in a safe  " << endl;
    }
    else
    {
        cout
            << "The system is in an unsafe state" << endl;
    }
    return 0;
}
