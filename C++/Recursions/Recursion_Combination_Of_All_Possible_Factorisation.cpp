#include <bits/stdc++.h>
using namespace std;
void FindFactors(int element, vector<int> &dp)
{
    if (element == 1)
    {
        cout << 1 << " ";
        for (int item : dp)
            cout << item << " ";
        cout << endl;
    }
    else
    {
        int stPoint = dp.empty() ? 2 : dp.back();
        for (int i = stPoint; i <= element; i++)
        {
            if (element % i == 0)
            {
                dp.push_back(i);
                FindFactors(element / i, dp);
                dp.pop_back();
            }
        }
    }
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int element;
        cin >> element;
        vector<int> dp;
        // dp.push_back(1);
        FindFactors(element, dp);
    }
    return 0;
}