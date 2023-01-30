#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> result;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        result.push_back(ele);
    }
    vector<long long> data(n);
    stack<long long> st;
    for (int i = n - 1; i >= 0; i--)
    {
        long long currentValue = result[i];
        while (!st.empty() && st.top() <= currentValue)
        {
            st.pop();
        }
        data[i] = st.empty() ? -1 : st.top();
        st.push(currentValue);
    }
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
}