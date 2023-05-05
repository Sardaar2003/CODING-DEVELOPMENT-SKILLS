#include <bits/stdc++.h>
using namespace std;
void findSubset(int ind, vector<int> &arr, vector<int> &dp, int sum)
{
    if (ind == arr.size())
    {
        dp.push_back(sum);
        return;
    }
    findSubset(ind + 1, arr, dp, sum + arr[ind]);
    findSubset(ind + 1, arr, dp, sum);
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    vector<int> dp;
    int sum = 0;
    findSubset(0, arr, dp, sum);
    sort(dp.begin(), dp.end());
    for (int item : dp)
        cout << item << " ";

    return 0;
}