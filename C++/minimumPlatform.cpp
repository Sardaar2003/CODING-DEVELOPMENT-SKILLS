#include <bits/stdc++.h>
using namespace std;
int minimumPlatform(int arrival[], int departure[], int size)
{
    int plat = 1;
    int i = 1;
    int j = 0;
    int result = 0;
    while (i < size && j < size)
    {
        if (arrival[i] <= departure[j])
        {
            i++;
            plat++;
        }
        else
        {
            plat--;
            j++;
        }
        result = max(result, plat);
    }
    return result;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        int arrival[size];
        int departure[size];
        for (int i = 0; i < size; i++)
            cin >> arrival[i];
        for (int j = 0; j < size; j++)
            cin >> departure[j];
        sort(arrival, arrival + size);
        sort(departure, departure + size);
        cout << minimumPlatform(arrival, departure, size) << endl;
    }
}