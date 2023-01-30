#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        string Value;
        int flag = 0;
        map<char, int> count;
        cin >> Value;
        for (int i = 0; i < Value.length(); i++)
        {
            count[Value[i]] += 1;
        }
        for (auto it : count)
        {
            if (it.second > 1)
            {
                flag = 1;
                cout << it.first << "=" << it.second << " ";
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        cout << "\n";
    }
}