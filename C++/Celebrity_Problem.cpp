#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> data;
    for (int i = 0; i < n; i++)
    {
        vector<int> result;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            result.push_back(ele);
        }
        data.push_back(result);
    }
    stack<int> finalData;
    for (int i = 0; i < n; i++)
    {
        finalData.push(i);
    }
    while (finalData.size() > 1)
    {
        int a = finalData.top();
        finalData.pop();
        int b = finalData.top();
        finalData.pop();
        if (M[a][b] == 1)
        {
            finalData.push(b);
        }
        else
        {
            finalData.push(a);
        }
    }
    int celeb = finalData.top();
    for (int i = 0; i < n; i++)
    {
        if (!i = celeb)
            &&(!M)
    }
}