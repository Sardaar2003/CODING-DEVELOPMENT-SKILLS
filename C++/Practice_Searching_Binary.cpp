#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int element;
    cin >> element;
    int first = 0;
    int last = n - 1;
    int middle = (first + last) / 2;
    int flag = 0;
    while (first <= last)
    {
        if (arr[middle] == element)
        {
            flag = 1;
            cout << "Found " << endl;
            break;
        }
        else if (arr[middle] < element)
        {
            first = middle + 1;
        }
        else if (arr[middle] > element)
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (flag == 0)
        cout << "No element is found " << endl;
}