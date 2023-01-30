#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5 + 2;
long long A[N];
long long treeNode[4 * N];
void build(long long node, long long start, long long end)
{
    if (start == end)
    {
        treeNode[node] = A[start];
        return;
    }
    long long middle = (start + end) / 2;
    build(2 * node + 1, start, middle);
    build(2 * node + 2, middle + 1, end);
    treeNode[node] = min(treeNode[2 * node + 1], treeNode[2 * node + 2]);
}
int query(long long node, long long start, long long end, long long left, long long right)
{
    if (start > right || end < left)
    {
        return INT16_MAX;
    }
    if (left <= start && end <= right)
    {
        return treeNode[node];
    }
    long long middle = (start + end) / 2;
    long long q1 = query(2 * node + 1, start, middle, left, right);
    long long q2 = query(2 * node + 2, middle + 1, end, left, right);
    // cout << q1 << " " << q2 << endl;
    return min(q1, q2);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long size;
        cin >> size;
        for (long long i = 0; i < size; i++)
        {
            cin >> A[i];
        }
        build(0, 0, size - 1);
        // for (int i = 1; i <= 2 * size - 1; i++)
        // {
        //     cout << treeNode[i] << " ";
        // }
        // cout << endl;
        long long numberOfQueries;
        cin >> numberOfQueries;
        for (int i = 0; i < numberOfQueries; i++)
        {
            long long left, right;
            cin >> left >> right;
            cout << query(0, 0, size - 1, left - 1, right - 1) << endl;
        }
    }
}