#include <bits/stdc++.h>
using namespace std;
int MCMRecursion(int array[], int i, int j, int minimum)
{
    if (i >= j)
        return 0;
    for (int k = i; k < j; k++)
    {
        int ans = MCMRecursion(array, i, k, minimum) + MCMRecursion(array, k + 1, j, minimum) + (array[i - 1] * array[j] * array[k]);
        if (ans < minimum)
            minimum = ans;
    }
    return minimum;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
            cin >> array[i];
        int minimum = INT_MAX;
        cout << MCMRecursion(array, 1, size - 1, minimum) << endl;
    }
}