#include <bits/stdc++.h>
using namespace std;
bool comp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}
bool charMatch(string text, string pattern, int s, int m)
{
    for (int i = 0; i < m; i++)
        if (text[s + i] != pattern[i])
            return false;
    return true;
}
int countNumberOfOccurences(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    int count = 1;
    for (int i = 0; i < n - m + 1; i++)
    {
        if (charMatch(text, pattern, i, m))
            count++;
    }
    return count;
}
int main()
{
    string result;
    cin >> result;
    unordered_map<string, int> data;
    for (int i = 0; i < result.length(); i++)
    {
        string res = result.substr(0, i + 1);
        int count = countNumberOfOccurences(result, res);
        // cout << res << " " << count << endl;
        if (res.length() > 1)
            data[res] = count;
    }
    vector<pair<string, int>> res1;
    // sort(data)

    for (auto &itr : data)
    {
        res1.push_back(itr);
    }
    sort(res1.begin(), res1.end(), comp);
    int maxLength = res1[0].second;

    string resultData;
    for (int i = 1; i < res1.size(); i++)
    {
        string result2 = res1[i].first;
        if (result2.length() >= resultData.length() && res1[i].second == maxLength)
            resultData = result2;
    }
    cout << resultData << endl;

    // for (int i = 0; i < res1.size(); i++)

    //     cout << res1[i].first << " " << res1[i].second << endl;
}