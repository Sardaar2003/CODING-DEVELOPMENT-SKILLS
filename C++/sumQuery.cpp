#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
int A[N];
int treeNode[4 * N];
const unsigned int M = 1000000007;
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
    int value = (treeNode[2 * node] + treeNode[2 * node + 1]) % M;
    treeNode[node] = value;
}
int query(int node, int start, int end, int left, int right)
{
    // If there is no overlap between the nodes
    if (start > right || end < left)
    {
        return 0;
    }
    // If there is complete overlap between the nodes
    if (left <= start && end <= right)
    {
        return treeNode[node];
    }
    // If there is a partial overlap between the nodes
    int middle = (start + end) / 2;
    int q1 = query(2 * node, start, middle, left, right);
    // cout << q1 << " ";
    int q2 = query(2 * node + 1, middle + 1, end, left, right);
    // cout << endl;
    // cout << q2 << " ";
    int finaldata = (q1 + q2) % M;
    return finaldata;
}
int main()

{
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
        build(1, 0, size - 1);

        int numberOfQuery;
        cin >> numberOfQuery;
        for (int i = 0; i < numberOfQuery; i++)
        {
            int left, right;
            cin >> left >> right;
            cout << query(1, 0, size - 1, left - 1, right - 1) % M << endl;
        }
    }
}