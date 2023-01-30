#include <bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    cin >> data;
    int i = 0;
    stack<char> st;
    while (i < data.length())
    {
        if (data[i] - '0' >= 0 && data[i] - '0' <= 9)
        {
            st.push(data[i]);
            i++;
        }
        else if (data[i] == 'p' && data[i + 1] != 'p')
        {
            i++;
            if (st.size() == 0)
            {
                cout << "OOPS" << endl;
                // break;
            }
            else
            {
                cout << st.top() << endl;
            }
        }
        else
        {
            if (st.size() == 0)
            {
                cout << "OOPS" << endl;
                // break;
            }
            else
            {
                st.pop();
                i += 2;
            }
        }
        cout << i << endl;
    }
}