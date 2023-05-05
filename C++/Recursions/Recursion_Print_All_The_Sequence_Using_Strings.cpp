#include <bits/stdc++.h>
using namespace std;
void PrintAllSubSequence(int ind, string data, vector<string> &dp, string newString)
{
    if (ind >= data.length())
    {
        return;
    }
    newString.push_back(data[ind]);
    PrintAllSubSequence(ind + 1, data, dp, newString);
    newString.pop_back();
    PrintAllSubSequence(ind + 1, data, dp, newString);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string data;
        cin >> data;
        vector<string> dp;
        string newString;
        PrintAllSubSequence(0, data, dp, newString);
    }
}