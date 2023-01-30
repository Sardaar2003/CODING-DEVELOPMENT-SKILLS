#include <bits/stdc++.h>
using namespace std;
// int subsetSum(int array[], int size, int sum)
// {
//     if (sum == 0)
//         return 1;
//     if (size == 0)
//         return 0;
//     if (array[size - 1] > sum)
//         return subsetSum(array, size - 1, sum);
//     return subsetSum(array, size - 1, sum - array[size - 1]) || subsetSum(array, size - 1, sum);
// }
int dp[1001][1001];
int subsetSum(int array[], int size, int sum)
{
    if (sum == 0)
        return 1;
    if (size == 0)
        return 0;
    if (dp[size][sum] != -1)
        return dp[size][sum];
    if (array[size - 1] > sum)
        dp[size][sum] = subsetSum(array, size - 1, sum);
    else
        dp[size][sum] = subsetSum(array, size - 1, sum - array[size - 1]) || subsetSum(array, size - 1, sum);
    return dp[size][sum];
}
int main()
{
    int size, sum;
    cin >> size >> sum;
    int array[size];
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < size; i++)
        cin >> array[i];
    if (subsetSum(array, size, sum))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}