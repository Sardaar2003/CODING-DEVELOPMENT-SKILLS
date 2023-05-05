#include <bits/stdc++.h>
using namespace std;
void findCombo(int ind, vector<int> &arr, int target, vector<int> &combo)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            for (int i = 0; i < combo.size(); i++)
                cout << combo[i] << " ";
            cout << endl;
        }
        return;
    }
    if (arr[ind] <= target)
    {
        combo.push_back(arr[ind]);
        findCombo(ind, arr, target - arr[ind], combo);
        combo.pop_back();
    }
    findCombo(ind + 1, arr, target, combo);
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int target;
    cin >> target;
    vector<int> combo;
    findCombo(0, arr, target, combo);
    return 0;
}