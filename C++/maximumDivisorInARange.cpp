#include <bits/stdc++.h>
using namespace std;
int binarySearch(int low, int high, vector<int> array, int element)
{
    if (high >= low)
    {
        int middle = low + (high - low) / 2;
        if (array[middle] == element)
        {
            return middle;
        }
        else if (array[middle] < element)
        {
            return binarySearch(middle + 1, high, array, element);
        }
        else
        {
            return binarySearch(low, middle, array, element);
        }
    }
    return -1;
}
int main()
{
    int start, end;
    cin >> start >> end;
    vector<int> divisible;
    for (int i = 1; i < min(start, end); i++)
    {
        if (start % i == 0 && end % i == 0)
        {
            divisible.push_back(i);
        }
    }
    int numberOfQuery;
    cin >> numberOfQuery;
    // int maxValue = 0;
    sort(divisible.begin(), divisible.end());
    // cout << binarySearch(0, divisible.size() - 1, divisible, 4) << endl;
    for (int i = 0; i < numberOfQuery; i++)
    {
        int maxValue = 0;
        int left, right;
        cin >> left >> right;
        for (int j = 0; j < divisible.size(); j++)
        {
            if (divisible[j] >= left && divisible[j] <= right && divisible[j] > maxValue)
            {
                maxValue = divisible[j];
            }
        }
        if (maxValue == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << maxValue << endl;
        }
    }
}