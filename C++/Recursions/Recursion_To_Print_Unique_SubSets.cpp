#include <bits/stdc++.h>
using namespace std;
void findSubset(int ind, vector<int> &arr, vector<int> &dp, vector<vector<int>> &res)
{

    res.push_back(dp);

    for (int i = ind; i < arr.size(); i++)
    {
        if (i != ind && arr[i] == arr[i - 1])
            continue;
        dp.push_back(arr[i]);
        findSubset(i + 1, arr, dp, res);
        dp.pop_back();
    }
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    vector<int> dp;
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());
    findSubset(0, arr, dp, res);
    // for (vector<int> item : res)
    // {
    //     for (int i : item)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
}