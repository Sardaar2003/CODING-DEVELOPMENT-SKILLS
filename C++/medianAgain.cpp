#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, kthTimes;
    cin >> size >> kthTimes;
    vector<int> result(size);
    for (int i = 0; i < size; i++)
    {
        cin >> result[i];
    }
    sort(result.begin(), result.end());
    if (size % 2 == 1)
    {
        int middle = size / 2;
        cout << result[middle] + kthTimes << endl;
    }
    else
    {
        int middle1 = result[size / 2 - 1];
        int middle2 = result[size / 2 + 1];
        int value = max(middle1, middle2) + kthTimes;
        int value2 = min(middle1, middle2);
        int middle = (value + value2) / 2;
        cout << middle << endl;
    }
}