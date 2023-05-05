#include <bits/stdc++.h>
using namespace std;
int SumSubset(int ind, vector<int> &arr, int k)
{
    if (ind >= arr.size() || k <= 0)
    {
        if (k == 0)
            return 1;
        return 0;
    }
    // return 0;

    int l = SumSubset(ind + 1, arr, k);
    // cout << l << " " << ind << " " << k << endl;
    int r = SumSubset(ind + 1, arr, k - arr[ind]);
    return l + r;
}
int main()
{
    int size;
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
        cin >> array[i];
    int k;
    cin >> k;
    int cnt = SumSubset(0, array, k);
    cout << cnt << endl;
    return 0;
}