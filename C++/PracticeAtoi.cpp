#include <bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    cin >> data;
    long long int num = 0;
    if (data[0] == '-')
    {
        for (int i = 1; i < data.length(); i++)
        {
            if (data[i] >= '0' && data[i] <= '9')
            {
                int val = data[i] - '0';
                num += val * pow(10, data.length() - i - 1);
            }
            else
            {
                cout << "-1" << endl;
                break;
            }
        }
        cout << num << endl;
    }
}