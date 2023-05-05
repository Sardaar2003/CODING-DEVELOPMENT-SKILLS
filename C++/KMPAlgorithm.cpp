#include <bits/stdc++.h>
using namespace std;
vector<int> makePiValue(string text, string pattern)
{
    int n = pattern.length();
    vector<int> piValue(n, 0);
    int k = 0;
    // piValue[1] = 0;
    for (int i = 1; i < n; i++)
    {
        while (k > 0 && pattern[k] != pattern[i])
            k = piValue[k];
        if (pattern[k] == pattern[i])
            k += 1;
        piValue[i] = k;
    }
    return piValue;
}
int KMPAlgorithm(string text, string pattern)
{
    int count = 0;
    int m = pattern.length();
    int n = text.length();
    vector<int> piValue = makePiValue(text, pattern);
    int q = 0;
    for (int i = 0; i < n; i++)
    {
        while (q > 0 && pattern[q] != text[i])
            q = piValue[q];
        if (pattern[q] == text[i])
            q += 1;
        if (q == m)
        {
            // count += 1;
            // cout << "The pattern is matched in a text at " << i - m << " shifts " << endl;
            q = piValue[q];
        }
    }
    return count;
}
int main()
{
    string text, pattern;
    cin >> text >> pattern;
    cout << KMPAlgorithm(text, pattern) << endl;
}