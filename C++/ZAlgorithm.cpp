#include <bits/stdc++.h>
using namespace std;
void createZArray(string str, vector<int> &z)
{
    int n = str.length();
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        if (i > r)
        {
            l = i;
            r = i;
            while (r < n && str[r - l] == str[r])
                r += 1;
            z[i] = r - l;
            r -= 1;
        }
        else
        {
            int k = i - l;
            if (z[k] < r - i + 1)
                z[i] = z[k];
            else
            {
                while (r < n && str[r - l] == str[r])
                    r += 1;
                z[i] = r - l;
                r -= 1;
            }
        }
    }
}
string z_algorithm(string text)
{
    // int n = pattern.length();
    // string str = pattern.append("$").append(text);
    int len = text.length();
    vector<int> z(len, 0);
    createZArray(text, z);
    int count = 1;
    int i = 1;
    while (i < len)
    {
        if (z[i] != z[i - 1])
            break;
        i++;
    }
    // cout << i << endl;
    string data = text.substr(0, i);
    // cout << data << endl;
    if (data.length() != 0)
        return data;
    else
        return "Not so Cool";
    // for (int i = 0; i < len; i++)
    // {
    //     cout << z[i] << " ";
    //     // if (z[i] == n)
    //     // {
    //     //     count++;
    //     //     // cout << "Pattern is found at index : " << i - (n + 1) << endl;
    //     // }
    // }
    // return count;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        // string text, pattern;
        string text;
        cin >> text;
        cout << z_algorithm(text) << endl;
    }
}