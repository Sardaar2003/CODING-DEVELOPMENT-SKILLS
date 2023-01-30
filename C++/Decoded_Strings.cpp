#include <bits/stdc++.h>
#include <stack>
using namespace std;
string decodeString(string s)
{
    if (s.size() == 0)
    {
        return s;
    }
    stack<char> value;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ']')
        {
            value.push(s[i]);
            continue;
        }
        string substring;
        while (value.top() != '[')
        {
            char ele = value.top();
            substring = substring + ele;
            value.pop();
        }
        value.pop();
        int c = 0;
        int k = 0;
        while (!value.empty() && value.top() >= '0' && value.top() <= '9')
        {
            k = k + (value.top() - '0') * pow(10, c);
            c++;
            value.pop();
        }
        reverse(substring.begin(), substring.end());
        string finals;
        for (int i = 0; i < k; i++)
        {
            finals = finals + substring;
        }
        for (int j = 0; j < finals.size(); j++)
        {
            value.push(finals[j]);
        }
    }
    string result;
    while (!value.empty())
    {
        result.push_back(value.top());
        value.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{
    cout << decodeString("3[a]2[bc]") << endl;
}