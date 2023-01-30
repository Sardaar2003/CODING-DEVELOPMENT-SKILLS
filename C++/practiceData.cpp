#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, value;
    cin >> size >> value;
    int element;
    vector<int> data;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        data.push_back(element);
    }
    int i = 0;
    int j = size - 1;
    int count = 0;
    bool flag = true;
    while (true)
    {
        if (data[i] <= value)
        {
            i++;
        }
        if (data[j] <= value)
        {
            j--;
        }
        if (data[i] > value && data[j] > value)
            break;
    }
    for (int i = 0; i < size; i++)
    {
        if (data[i] == value)
            count++;
    }
    // cout << count << endl;
    if (count == size)
    {
        cout << 0 << endl;
    }
    else
        cout << abs(j - i) + 1 << endl;
}