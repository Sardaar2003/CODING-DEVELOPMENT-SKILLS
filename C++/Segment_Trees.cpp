#include <bits/stdc++.h>
#include <vector>
using namespace std;
void ConstructionSegmentTree(vector<int> SegmentTree, int arr[], int low, int high, int position)
{
    if (low == high)
    {
        SegmentTree[position] = arr[low];
        return;
    }
    int mid = (low + high) / 2;
    ConstructionSegmentTree(SegmentTree, arr, low, mid, 2 * position + 1);
    ConstructionSegmentTree(SegmentTree, arr, mid + 1, high, 2 * position + 2);
    SegmentTree[position] = max(SegmentTree[2 * position + 1], SegmentTree[2 * position + 2]);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // int SegmentTree[2 * n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> SegmentTree(2 * n);
    ConstructionSegmentTree(SegmentTree, arr, 0, n, 0);
    for (int i = 0; i < 2 * n; i++)
    {
        cout << SegmentTree[i] << " ";
    }
}