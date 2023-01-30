// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     string value = "";
//     stack<char> st;
//     int i = 1;
//     while (true)
//     {
//         cin >> value;
//         if (value == "---")
//         {D:\MinGW\bin
//             break;
//         }
//         if (value.length() % 2 == 1 && value != "---")
//         {
//             return -1;
//         }

//         int open = 0;
//         int close = 0;
//         for (int i = 0; i < value.length(); i++)
//         {
//             char data = value[i];
//             if (data == '{')
//                 st.push(data);
//             else
//             {
//                 if (!st.empty() && st.top() == '{')
//                 {
//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push(data);
//                 }
//             }
//         }
//         while (!st.empty())
//         {
//             if (st.top() == '{')
//             {
//                 open++;
//             }
//             else
//             {
//                 close++;
//             }
//             st.pop();
//         }
//         int result = (open + 1) / 2 + (close + 1) / 2;
//         cout << i << ". " << result << endl;
//         i++;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int get(char a, char b)
{
    if (a == b)
        return 1;
    if (a == '{' and b == '}')
        return 2;
    return 0;
}
int main(int argc, char const *argv[])
{
    string s;
    int c, k = 1;
    while (1)
    {
        cin >> s;

        if (s[0] == '-')
            return 0;

        cout << k++ << ". ";
        stack<char> q;
        char ch;
        int c = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (q.empty() || s[i] == '{')
                q.push(s[i]);
            else
            {
                if (q.top() == '{')
                    q.pop();
                else
                    q.push(s[i]);
            }
        }

        while (!q.empty())
        {
            ch = q.top();
            q.pop();
            c += get(ch, q.top());
            q.pop();
        }
        cout << c << endl;
    }
}