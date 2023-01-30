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
        vector<int> result(size);
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> result[i];
        }
        sort(result.begin(), result.end());
        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
            {
                count1 += result[i];
            }
            else
            {
                count2 += result[i];
            }
        }
        cout << max(count1, count2) << endl;
    }
}