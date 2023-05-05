#include <bits/stdc++.h>
using namespace std;
void subsetSum(int ind, vector<int> arr, vector<int> &res, vector<int> &finalData)
{
    if (ind >= arr.size())
    {
        int sum = accumulate(res.begin(), res.end(), 0);
        // cout << sum << " ";
        finalData.push_back(sum);
        return;
    }
    res.push_back(arr[ind]);
    subsetSum(ind + 1, arr, res, finalData);
    res.pop_back();
    subsetSum(ind + 1, arr, res, finalData);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> res;
    vector<int> finalData;
    subsetSum(0, arr, res, finalData);
    sort(finalData.begin(), finalData.end());
    for (int i = 0; i < finalData.size(); i++)
        cout << finalData[i] << " ";
    return 0;
}