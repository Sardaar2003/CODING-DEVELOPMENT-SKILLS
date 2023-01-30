#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return a < b;
}
int main()
{
    int starting, ending;
    cin >> starting >> ending;
    int *result;
    int index = 0;
    for (int i = 1; i <= starting && i <= ending; ++i)
    {
        if (starting % i == 0 && ending % i == 0)
        {
            result[index] = i;
            index++;
        }
    }
    int size = sizeof(result) / sizeof(result[0]);
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }
    int numberOfQuery;
    cin >> numberOfQuery;
    while (numberOfQuery--)
    {
        int maxValue = 0;
        int low, high;
        cin >> low >> high;
        int range[high - low + 1];
        int index1 = 0;
        for (int i = low; i <= high; i++)
        {
            range[index1] = i;
            index1++;
        }
        for (int i = 0; i < high - low + 1; i++)
        {
            cout << range[i] << endl;
        }
        // vector<int> finalresult;
        // vector<int>::iterator itr, start;
        // itr = set_intersection(result, result + size, range, range + (high - low + 1), finalresult.begin(), comp);

        // for (start = finalresult.begin(); start != itr; ++start)
        // {
        //     cout << *start << " ";
        // }
    }
}