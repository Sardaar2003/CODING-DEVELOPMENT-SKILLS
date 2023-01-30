#include <bits/stdc++.h>
using namespace std;
bool charMatch(string text, string pattern, int s, int m)
{
    for (int i = 0; i < m; i++)
    {
        if (pattern[i] != text[s + i])
        {
            return false;
        }
    }
    return true;
}
void rabinKarpAlgo(string text, string pattern, int d, int mod)
{
    int n = text.length();
    int m = pattern.length();
    int h = ((int)pow(d, m - 1)) % mod;
    int p = 0;
    int t[n - m + 1];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < m; i++)
    {
        p = (d * p + (pattern[i] - 'a')) % mod;
        t[0] = (d * t[0] + (text[i] - 'a')) % mod;
    }
    for (int s = 0; s < n - m + 1; s++)
    {
        if (p == t[s])
        {
            if (charMatch(text, pattern, s, m))
            {
                cout << "The string matches after " << s << " shifts" << endl;
            }
        }
        else if (s < n - m)
        {
            t[s + 1] = ((d * (t[s] - (text[s + 1] - 'a') * h)) + text[s + m] - 'a') % mod;
        }
    }
}
int main()
{
    string pattern, text;
    cin >> text >> pattern;
    int d = 26;
    int mod = 1000000007;
    rabinKarpAlgo(text, pattern, d, mod);
}