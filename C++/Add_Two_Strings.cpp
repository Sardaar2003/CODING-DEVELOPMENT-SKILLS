#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int testCases;
//     cin >> testCases;
//     string valueData1;
//     string valueData2;
//     for (int i = 0; i < testCases; i++)
//     {
//         cin >> valueData1;
//         cin >> valueData2;
//         cout << stoi(valueData1) + stoi(valueData2) << endl;
//     }
//     return 0;
// }
int main()
{
    int testCases;
    cin >> testCases;
    string valueData1;
    string valueData2;
    int carryon = 0;
    for (int i = 0; i < testCases; i++)
    {
        cin >> valueData1;
        cin >> valueData2;
        if (valueData1.length() > valueData2.length())
        {
            swap(valueData1, valueData2);
        }
        int length1 = valueData1.length();
        int length2 = valueData2.length();
        string result;
        reverse(valueData1.begin(), valueData1.end());
        reverse(valueData2.begin(), valueData2.end());
        for (int i = 0; i < length1; i++)
        {
            int sum = (valueData1[i] - '0') + (valueData2[i] - '0') + carryon;
            result.push_back(sum % 10 + '0');
            carryon = sum / 10;
        }
        for (int i = length1; i < length2; i++)
        {
            int sum = (valueData2[i] - '0') + carryon;
            result.push_back(sum % 10 + '0');
            carryon = sum / 10;
        }
        if (carryon)
        {
            result.push_back(carryon + '0');
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
}