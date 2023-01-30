#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        string checkValue;
        cin >> checkValue;
        string arrayData[6];
        int flag = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> arrayData[j];
        }
        for (int j = 0; j < 5; j++)
        {
            if (checkValue[0] == arrayData[j][0] || checkValue[1] == arrayData[j][1])
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if (flag == 0)
        {

            cout << "NO" << endl;
        }
    }
}