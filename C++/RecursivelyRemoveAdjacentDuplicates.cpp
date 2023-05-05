#include <bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    cin >> data;
    stack<char> st;
    for (int i = 0; i < data.length(); i++)
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
    cout << newVal << endl;
}