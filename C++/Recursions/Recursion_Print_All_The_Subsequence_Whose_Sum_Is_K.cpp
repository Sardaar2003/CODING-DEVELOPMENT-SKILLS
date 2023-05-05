#include <bits/stdc++.h>
using namespace std;
void isSumSubset(int ind, vector<int> arr, vector<int> &dp, int k)
{
    if (ind >= arr.size() || k <= 0)
    {
        if (k == 0)
        {
            for (int item : dp)
                cout << item << " ";
            cout << endl;
        }
        return;
    }

    dp.push_back(arr[ind]);
    k -= arr[ind];
    isSumSubset(ind + 1, arr, dp, k);
    dp.pop_back();
    k += arr[ind];
    isSumSubset(ind + 1, arr, dp, k);
}
int main()
{
    int size, k;
    cin >> size >> k;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    vector<int> dp;
    isSumSubset(0, arr, dp, k);
    return 0;
}