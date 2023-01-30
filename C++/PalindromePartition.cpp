#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string a, int i, int j)
{
    while (i > j)
    {
        if (a[i++] != a[j--])
            return 0;
    }
    return 1;
}
int numberOfPartition(string a, int i, int j)
{
    if (i >= j or isPalindrome(a, i, j))
        return 0;
    int mini = INT_MAX;
    for (int k = i; k < j; k++)
    {
        mini = min((1 + numberOfPartition(a, i, k) + numberOfPartition(a, k + 1, j)), mini);
    }
    return mini;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string a;
        cin >> a;
        cout << numberOfPartition(a, 0, a.length() - 1) << endl;
    }
}