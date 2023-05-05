// This is method 1 involving queue
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     if (s1.length() != s2.length())
//     {
//         cout << "NO" << endl;
//     }
//     else
//     {
//         bool flag = true;
//         queue<char> st1, st2;
//         for (char item : s1)
//             st1.push(item);
//         for (char item2 : s2)
//             st2.push(item2);
//         int k = s2.length();
//         while (k--)
//         {
//             char ch = st2.front();
//             st2.pop();
//             st2.push(ch);
//             if (st2 == st1)
//             {
//                 flag = false;
//                 cout << "YES" << endl;
//                 break;
//             }
//         }
//         if (flag == true)
//             cout << "NO" << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st1, st2;
    cin >> st1 >> st2;
    bool flag = true;
    if (st1.length() != st2.length())
    {
        cout << "NO" << endl;
    }
    else
    {
        string temp = st1 + st2;
        if (temp.find(st2) != string::npos)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}