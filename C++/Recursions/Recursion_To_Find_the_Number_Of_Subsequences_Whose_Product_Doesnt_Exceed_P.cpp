#include <bits/stdc++.h>
using namespace std;
void countSub(int ind, int mul, int P, vector<int> &arr, int &cnt)
{
    if (ind == arr.size())
    {
        if (mul <= P)
        {
            cout << mul << endl;
            cnt++;
        }
        return;
    }
    countSub(ind + 1, mul * arr[ind], P, arr, cnt);
    countSub(ind + 1, mul, P, arr, cnt);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size, P;
        cin >> size >> P;
        vector<int> arr(size);
        int count = 0;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        countSub(0, 1, P, arr, count);
        cout << count << endl;
    }
}