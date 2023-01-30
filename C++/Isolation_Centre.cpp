#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int sizeOfString, numberOfQueries;
        cin >> sizeOfString >> numberOfQueries;
        string dataValue;
        cin >> dataValue;
        int frequency[26] = {0};
        for (int j = 0; j < dataValue; j++)
        {
            frequency[dataValue[j] - 'a']++;
        }
        for (int j = 0; j < numberOfQueries; j++)
        {
            int m;
            cin >> m;
            int count = 0;
            for (int k = 0; k < 26; k++)
            {
                if (frequency[k] > m)
                {
                    count += frequency[k] - m;
                }
            }
            cout << count << endl;
        }
    }
}