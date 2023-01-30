#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    string Data;
    cin >> Data;
    stack<char> St;
    St.push('#');
    int flag = 0;
    for (int i = 0; i < Data.length(); i++)
    {
        if (Data[i] == '(' && St.top() == '#')
        {
            St.push(Data[i]);
        }
        else if (Data[i] == '(' && St.top() == '(')
        {
            flag = 1;
            cout << 1 << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << 0 << endl;
    }
}