#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        string Data;
        cin >> Data;
        int x, k;
        cin >> x >> k;
        int count = 0;
        int frequency[26] = {0};
        for (int i = 0; i < Data.length(); i++)
        {
            frequency[Data[i] - 'a']++;
            if (frequency[Data[i] - 'a'] > x)
            {
                if (k > 0)
                {
                    frequency[Data[i] - 'a']--;
                    k--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}