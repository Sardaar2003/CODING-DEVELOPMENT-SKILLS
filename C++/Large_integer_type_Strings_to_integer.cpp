#include <bits/stdc++.h>
using namespace std;
int main()
{
    string valueData;
    cin >> valueData;
    int result = 0;
    for (int i = 0; i < valueData.length(); i++)
    {
        result = (result * 10 + (int)(valueData[i] - '0')) % 12;
    }
    cout << result << endl;
}