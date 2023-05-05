#include <bits/stdc++.h>
using namespace std;
bool charMatch(string text, string pattern, int s, int m)
{
    for (int j = 0; j < m; j++)
    {
        if (pattern[j] != text[s + j])
            return false;
    }
    return true;
}
void Naive_String_Match(string text, string pattern)
{
    int n = text.length();
    int count;
    int m = pattern.length();
    for (int i = 0; i < n - m + 1; i++)
    {
        if (charMatch(text, pattern, i, m))
        {
            count++;
            // cout << "The pattern is matched at the shits : " << i << endl;
        }
    }
    cout << count << endl;
}
int main()
{
    string text, pattern;
    cin >> pattern >> text;
    // cin >> text >> pattern;
    Naive_String_Match(text, pattern);
}