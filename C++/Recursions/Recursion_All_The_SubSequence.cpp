#include <bits/stdc++.h>
using namespace std;
void printAllSequence(int ind, vector<int> &dp, vector<int> array, int size)
{
    if (ind == size)
    {
        for (int item : dp)
            cout << item << " ";
        cout << endl;
        if (dp.size() == 0)
        {
            cout << "{}" << endl;
            return;
        }
        return;
    }
    printAllSequence(ind + 1, dp, array, size); // Not Taking the element into consideration
    dp.push_back(array[ind]);
    printAllSequence(ind + 1, dp, array, size); // Taking the element into consideration
    dp.pop_back();
}
int main()
{
    int size;
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
        cin >> array[i];
    vector<int> dp;
    printAllSequence(0, dp, array, size);
    return 0;
}