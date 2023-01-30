#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        string stringData;
        cin >> stringData;
        int count = 0;
        for (int i = 0; i < stringData.length() - 1, i++)
        {
            if ((stringData[i] == 'x' && stringData[i + 1] == 'y') || (stringData[i] == 'y' && stringData[i + 1] == 'x'))
            {
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
}