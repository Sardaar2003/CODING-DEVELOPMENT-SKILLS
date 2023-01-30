#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int value, value2;
        cin >> value >> value2;
        vector<int> result;
        while (value > 0)
        {
            int remainder = value % 10;
            result.push_back(remainder);
            value /= 10;
        }
        while (value2 > 0)
        {
            int remainder2 = value2 % 10;
            result.push_back(remainder2);
            value2 /= 10;
        }
        sort(result.begin(), result.end());
        int data = result[result.size() - 1] * 10 + result[0];
        int data2 = result[result.size() - 2] * 10 + result[1];
        cout << data + data2 << endl;
    }
}