#include <bits/stdc++.h>
using namespace std;
bool validating(char e)
{
    if (e == 'a' || e == 'i' || e == 'o' || e == 'u' || e == 'e')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string data;
        cin >> data;
        int i = 0;
        int flag = 0;
        bool value = true;
        while (i < data.size())
        {
            // cout << data[i] << " ";
            if (validating(data[i]) == false)
            {

                // cout << data[i] << " ";
                i++;
                if (validating(data[i]) == false)
                {
                    // cout << data[i] << " ";
                    value = false;
                    break;
                }
            }
            i++;
            // cout << endl;
        }
        if (value == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}