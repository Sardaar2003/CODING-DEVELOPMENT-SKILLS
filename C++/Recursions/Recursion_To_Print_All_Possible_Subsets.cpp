#include <bits/stdc++.h>
using namespace std;
void allPossibleSubsets(int ind, vector<int> &arr, vector<int> &res, vector<vector<int>> &dp)
{
    if (ind >= arr.size())
    {
        dp.push_back(res);
        return;
    }
    res.push_back(arr[ind]);
    allPossibleSubsets(ind + 1, arr, res, dp);
    res.pop_back();
    allPossibleSubsets(ind + 1, arr, res, dp);
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    vector<int> res;
    vector<vector<int>> dp;
    allPossibleSubsets(0, arr, res, dp);
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[i].size(); i++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}