#include <bits/stdc++.h>
using namespace std;
// One way of doing the problem
// int main()
// {
//     int testCases;
//     cin >> testCases;
//     for (int i = 0; i < testCases; i++)
//     {
//         string ValueData;
//         cin >> ValueData;
//         for (int j = 0; j < ValueData.size(); j++)
//         {

//             // cout << ValueData[i] << endl;
//             if (count(ValueData.begin(), ValueData.end(), ValueData[j]) == 1)
//             {
//                 cout << ValueData[j] << endl;
//                 break;
//             }
//         }
//     }
// }
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        string ValueData;
        cin >> ValueData;
        int frequency[26] = {0};
        for (char item : ValueData)
        {
            frequency[item - 97]++;
        }
        for (char item : ValueData)
        {
            if (frequency[item - 97] == 1)
            {
                cout << item << endl;
                break;
            }
        }
    }
}