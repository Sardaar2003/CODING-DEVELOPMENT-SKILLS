#include <bits/stdc++.h>
using namespace std;
void findCombo(int ind, int target, vector<int> &arr, vector<int> &data, vector<vector<int>> &dp)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            dp.push_back(data);
        }
        return;
    }
    if (arr[ind] <= target)
    {
        data.push_back(arr[ind]);
        findCombo(ind + 1, target - arr[ind], arr, data, dp);
        data.pop_back();
    }
    findCombo(ind + 1, target, arr, data, dp);
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    vector<int> data;
    sort(arr.begin(), arr.end());
    int target;
    vector<vector<int>> dp;
    cin >> target;
    findCombo(0, target, arr, data, dp);
    sort(dp.begin(), dp.end());
    dp.erase(unique(dp.begin(), dp.end()), dp.end());
    for (vector<int> item : dp)
    {
        for (int i : item)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}