// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         string str;
//         cin >> str;
//         if (str.length() % 2 == 0)
//             cout << str.length() << endl;
//         else
//         {
//             int minV = INT_MAX;
//             for (int i = 0; i < str.length() / 2; i++)
//             {
//                 if (str[i] != str[str.length() - i - 1])
//                 {
//                     int val1 = str[i] - 'a';
//                     int val2 = str[str.length() - i - 1] - 'a';
//                     minV = min(minV, max(val1, val2));
//                     // cout << val1 << " " << val2 << endl;
//                 }
//             }
//             if (minV == INT_MAX)
//                 cout << 0 << endl;
//             else
//                 cout << minV << endl;
//         }
//     }
// }
#include <iostream>
#include <string>
#include <cmath>

int min_operations_to_make_palindrome(const std::string &s)
{
    int operations = 0;
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        operations += abs(s[i] - s[n - i - 1]);
    }
    return operations / 2;
}

int main()
{
    int testcases;
    std::cin >> testcases;
    while (testcases--)
    {
        std::string s;
        std::cin >> s;
        int operations = min_operations_to_make_palindrome(s);
        std::cout << operations << std::endl;
    }
    return 0;
}
