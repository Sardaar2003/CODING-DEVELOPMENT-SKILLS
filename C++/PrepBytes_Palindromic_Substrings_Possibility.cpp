#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool is_palindrome(const string &s)
{
    return s == string(s.rbegin(), s.rend());
}

vector<vector<string>> palindrome_division(const string &s)
{
    if (s.empty())
    {
        return {{}};
    }
    vector<vector<string>> res;
    for (int i = 1; i <= s.length(); i++)
    {
        string sub = s.substr(0, i);
        if (is_palindrome(sub))
        {
            vector<vector<string>> rest = palindrome_division(s.substr(i));
            for (auto &r : rest)
            {
                r.insert(r.begin(), sub);
                res.push_back(r);
            }
        }
    }
    sort(res.begin(), res.end(), [](const vector<string> &a, const vector<string> &b)
         {
        for (int i = 0; i < min(a.size(), b.size()); i++) {
            if (a[i].length() != b[i].length()) {
                return a[i].length() < b[i].length();
            }
        }
        return a.size() < b.size(); });
    return res;
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string s;
        // cout << "Enter the string: ";
        cin >> s;
        vector<vector<string>> divisions = palindrome_division(s);
        for (auto &d : divisions)
        {
            for (int i = 0; i < d.size(); i++)
            {
                cout << d[i];
                if (i != d.size() - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
