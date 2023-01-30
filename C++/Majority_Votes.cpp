#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int element;
        for (int i = 0; i < size; i++)
        {
            if (count == 0)
            {
                element = arr[i];
            }
            if (element == arr[i])
            {
                count++;
            }
            else if (element != arr[i])
            {
                count--;
            }
        }
        int countd = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == element)
            {
                countd++;
            }
        }
        if (countd > size / 2)
        {
            cout << element << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}