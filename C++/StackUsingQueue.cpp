#include <bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    cin >> data;
    stack<int> q;
    int i = 0;
    while (i < data.length() - 1)
    {
        // cout << i << " ";
        if (data[i] >= '0' && data[i] <= '9')
            q.push(data[i] - '0');
        else if (data[i] == 'p' && (i + 1) <= data.length() && data[i + 1] != 'p')
        {
            if (q.empty())
                cout << "OOPS" << endl;
            else
                cout << q.top() << endl;
        }

        else
        {
            if (q.empty())
                cout << "OOPS" << endl;
            else
            {
                q.pop();
                i += 1;
            }
        }
        i += 1;
    }
    return 0;
}