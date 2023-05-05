#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
        cin >> array[i];
    int target;
    cin >> target;
    int start = 0;
    int i = 1;
    int count = 0;
    int currentSum = array[0];
    while (i < array.size())
    {
        while (currentSum > target && start < (i - 1))
        {
            currentSum -= array[start];
            start++;
        }
        if (currentSum == target)
        {
            cout << "Sum Found in the array Start : " << start << " End : " << i - 1 << endl;
            count++;
        }
        if (i < array.size())
        {
            currentSum += array[i];
        }
        i += 1;
    }
    cout << "The number of times the target sum is found is : " << count << endl;
    return 0;
}