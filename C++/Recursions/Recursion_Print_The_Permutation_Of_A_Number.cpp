#include <bits/stdc++.h>
using namespace std;
// void findPermut(vector<int> &arr, vector<bool> &flag, vector<int> &dp, vector<vector<int>> &rs)
// {
//     if (dp.size() == arr.size())
//     {
//         rs.push_back(dp);
//         return;
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (!flag[i])
//         {
//             flag[i] = true;
//             dp.push_back(arr[i]);
//             findPermut(arr, flag, dp, rs);
//             flag[i] = false;
//             dp.pop_back();
//         }
//     }
// }
void permut(vector<vector<int>> &res, vector<int> &arr, int i, int n)
{
    if (i == n)
    {
        res.push_back(arr);
        return;
    }
    for (int j = i; j <= n; j++)
    {
        swap(arr[i], arr[j]);
        permut(res, arr, i + 1, n);
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    vector<bool> flag(size, false);
    vector<int> dp;
    vector<vector<int>> rs;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    // findPermut(arr, flag, dp, rs);
    permut(rs, arr, 0, size - 1);
    for (vector<int> item : rs)
    {
        for (int it : item)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}