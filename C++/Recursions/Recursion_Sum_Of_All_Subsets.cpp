#include <bits/stdc++.h>
using namespace std;
int totalSubset(int ind, vector<int> &array, int currSum, int totalSum)
{
    if (ind == array.size())
    {
        totalSum += currSum;
        // return 0;
    }
    else
    {
        totalSum = totalSubset(ind + 1, array, currSum + array[ind], totalSum);
        totalSum = totalSubset(ind + 1, array, currSum, totalSum);
    }
    return totalSum;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        vector<int> array(size);
        for (int i = 0; i < size; i++)
            cin >> array[i];
        cout << totalSubset(0, array, 0, 0) << endl;
    }
}