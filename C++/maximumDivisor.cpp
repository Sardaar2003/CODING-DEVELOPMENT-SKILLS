#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
int A[N], treeNode[4 * N];
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void build(int node, int start, int end)
{
    if (start == end)
    {
        treeNode[node] = A[start];
        return;
    }
    int middle = (start + end) / 2;
    build(2 * node, start, middle);
    build(2 * node + 1, middle + 1, end);
    treeNode[node] = gcd(treeNode[2 * node], treeNode[2 * node + 1]);
}
int query(int node, int start, int end, int left, int right)
{
    if (start > right || end < left)
        return 0;
    if (left <= start && end <= right)
    {
        return treeNode[node];
    }
    int middle = (start + end) / 2;
    int q1 = query(2 * node, start, middle, left, right);
    int q2 = query(2 * node + 1, middle + 1, end, left, right);
    return gcd(q1, q2);
}
int main()
{
    // cout << gcd(12, 1) << endl;
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> A[i];
        }
        int numberOfQuery;
        cin >> numberOfQuery;
        build(1, 0, size - 1);
        // for (int i = 1; i <= 2 * size - 1; i++)
        // {
        //     cout << treeNode[i] << " ";
        // }
        for (int i = 0; i < numberOfQuery; i++)
        {
            int left, right;
            cin >> left >> right;
            cout << query(1, 0, size - 1, left - 1, right - 1) << endl;
        }
    }
}