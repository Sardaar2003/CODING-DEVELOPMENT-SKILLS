#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        vector<int> data(size);
        for (int i = 0; i < size; i++)
            cin >> data[i];
        int pre = 0, cur = 0;
        for (int i = 0; i < size; i++)
        {
            int temp = max(pre + data[i], cur);
            pre = cur;
            cur = temp;
        }
        cout << cur << endl;
    }
}