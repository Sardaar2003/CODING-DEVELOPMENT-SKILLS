#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> data;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        data.push_back(ele);
    }
    vector<int> result(n);
    stack<int> st;
    for (int j = n - 1; j >= 0; j--)
    {
        int currentValue = data[j];
        while (!st.empty() && st.top() >= currentValue)
        {
            st.pop();
        }
        result[j] = st.empty() ? -1 : st.top();
        st.push(currentValue);
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}