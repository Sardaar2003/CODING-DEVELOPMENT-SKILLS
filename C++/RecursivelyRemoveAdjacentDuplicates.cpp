#include <bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    cin >> data;
    stack<char> st;
    st.push(data[0]);
    for (int i = 1; i < data.length(); i++)
    {
        if (st.top() == data[i])
            st.pop();
        else
            st.push(data[i]);
    }
    string newVal = "";
    while (!st.empty())
    {
        newVal += st.top();
        st.pop();
    }
    reverse(newVal.begin(), newVal.end());
    cout << newVal << endl;
}