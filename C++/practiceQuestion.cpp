#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int strength;
        int element1;
        int element2;
        int element3;
        cin >> strength >> element1 >> element2 >> element3;
        // cout << strength << element1 << element2 << element3 << endl;

        stack<int> st;
        int count = 0;

        vector<int> val(3);
        val.push_back(element1);
        val.push_back(element2);
        val.push_back(element3);
        sort(val.begin(), val.end());
        for (int i = 0; i < 3; i++)
        {
            st.push(val[i]);
        }
        // cout << st.size() << endl;
        bool flag = true;
        while (flag && st.size() != 0)
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if ((a + b) > strength)
            {
                st.push(b);
                count++;
            }
            else if ((a + b) <= strength)
            {
                count++;
                flag = false;
            }
        }
        if (st.top() <= strength)
        {
            count++;
        }
        cout << count << endl;
    }
}