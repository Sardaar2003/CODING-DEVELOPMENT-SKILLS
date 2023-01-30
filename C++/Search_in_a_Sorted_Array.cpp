#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int start = 0;
    int index = -1;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // Check if the element is found or not
        if (nums[mid] == target)
        {
            index = mid;
            break;
        }
        // return mid;

        if (nums[start] <= nums[mid])
        {
            if (target >= nums[start] && target <= nums[end])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (target >= nums[mid] && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return index;
}
int main()
{
    vector<int> result;
    result.push_back(4);
    result.push_back(5);
    result.push_back(6);
    result.push_back(7);
    result.push_back(0);
    result.push_back(1);
    result.push_back(2);
    cout << search(result, 0) << endl;
}