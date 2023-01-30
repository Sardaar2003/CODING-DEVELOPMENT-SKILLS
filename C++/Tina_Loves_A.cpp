#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {

        string dataValue;
        cin >> dataValue;
        int frequency[25] = {0};
        for (char item : dataValue)
        {
            frequency[item - 'a']++;
        }
        if (frequency[0] > dataValue.length() / 2)
        {
            cout << dataValue.length() << endl;
        }
        else
        {
            int i = 1;
            while (frequency[0] < dataValue.length() / 2)
            {
                if (frequency[i] == 0)
                {
                    i += 1;
                }
                else
                {
                    frequency[i] = frequency[i]--;
                    i++;
                }
            }
        }
    }
}