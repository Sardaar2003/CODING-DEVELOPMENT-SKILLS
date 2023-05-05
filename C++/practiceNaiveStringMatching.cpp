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
int naiveAlgo(string text, string pattern)
{
    int n = text.length();
    int count = 0;
    int m = pattern.length();
    for (int i = 0; i < n - m + 1; i++)
    {
        if (charMatch(text, pattern, i, m))
            count++;
    }
    return count;
}
int main()
{
    string text, pattern;
    cin >> text >> pattern;
    cout << naiveAlgo(text, pattern) << endl;
    return 0;
}