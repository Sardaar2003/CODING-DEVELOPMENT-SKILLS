#include <bits/stdc++.h>
using namespace std;
vector<int> makePiArray(string pattern)
{
    int n = pattern.length();
    int k = 0;
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++)
    {
        while (k > 0 && pattern[k + 1] != pattern[i])
            k = pi[i];
        if (pattern[k + 1] == pattern[i])
            k += 1;
        pi[i] = k;
    }
    return pi;
    // int n = pattern.length();
    // vector<int> z(n, 0);
    // int l = 0, r = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (i > r)
    //     {
    //         l = i;
    //         r = i;
    //         while (r < n && pattern[r - l] == pattern[r])
    //             r += 1;
    //         z[i] = r - l;
    //         r -= 1;
    //     }
    //     else
    //     {
    //         int k = i - l;
    //         if (z[k] < r - i + 1)
    //             z[i] = z[k];
    //         else
    //         {
    //             while (r < n && pattern[r - l] == pattern[r])
    //                 r += 1;
    //             z[i] = r - l;
    //             r -= 1;
    //         }
    //     }
    // }
    // return z;
}
int main()
{
    string pattern;
    cin >> pattern;
    vector<int> PiValue = makePiArray(pattern);
    for (int i = 0; i < PiValue.size(); i++)
    {
        cout << PiValue[i] << " ";
    }
    return 0;
}