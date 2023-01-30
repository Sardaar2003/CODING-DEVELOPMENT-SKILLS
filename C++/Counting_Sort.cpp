#include <bits/stdc++.h>
using namespace std;
void CountingSort(int array[], int size)
{
    int output[size];
    int count[max(array.begin(), array.end()) + 1];
    memset(count, 0, sizeof(count));
    for (int i = 0; arr[i]; i++)
        count[arr[i]]++;
    for (int i = 0; i < count.length(); i++)
        count[i] += count[i - 1];
    for (int i = 0; arr[i]; i++)
    {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i++)
        cout << arr[i];
}