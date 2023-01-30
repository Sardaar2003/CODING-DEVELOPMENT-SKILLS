#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, kthValue;
    cin >> size >> kthValue;
    queue<int> q;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        q.push(element);
    }
    vector<int> result(kthValue);
    for (int i = 0; i < kthValue; i++)
    {
        int element = q.front();
        q.pop();
        result[i] = element;
    }
    for (int i = 0; i < kthValue / 2; i++)
    {
        int temp = result[i];
        result[i] = result[kthValue - i - 1];
        result[kthValue - i - 1] = temp;
    }
    queue<int> q1;
    for (int i = 0; i < kthValue; i++)
    {
        q1.push(result[i]);
    }
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        q1.push(element);
    }
    while (!q1.empty())
    {
        int element = q1.front();
        q1.pop();
        cout << element << " ";
    }
}