#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> get_prefix(string const &s)
{
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

vector<int> kmp(string const &s, string const &t)
{
    vector<int> pi = get_prefix(s + '#' + t);
    int n = s.size(), m = t.size();
    vector<int> occurrences;
    for (int i = n + 1; i < n + m + 1; i++)
    {
        if (pi[i] == n)
            occurrences.push_back(i - 2 * n);
    }
    return occurrences;
}

int main()
{
    string s, t;
    getline(cin, s); // read input string s
    getline(cin, t); // read input string t

    vector<int> occurrences = kmp(s, t);

    for (int i = 0; i < (int)occurrences.size(); i++)
        cout << occurrences[i] << " ";
    cout << endl;

    return 0;
}
