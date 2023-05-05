// // #include <bits/stdc++.h>
// // using namespace std;
// // bool isConsonant(char d)
// // {
// //     if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u')
// //         return false;
// //     else
// //         return true;
// // }
// // int main()
// // {
// //     int testcases;
// //     cin >> testcases;
// //     while (testcases--)
// //     {
// //         string data;
// //         cin >> data;
// //         bool flag = true;
// //         for (int i = 0; i < data.length() - 1; i++)
// //         {
// //             // cout << i << endl;
// //             if (data[i] == 'n')
// //             {
// //                 // i += 1;
// //                 // cout << "Hi" << endl;
// //                 continue;
// //             }

// //             if (isConsonant(data[i]) && isConsonant(data[i + 1]))
// //             {
// //                 flag = false;
// //                 cout << "NO" << endl;
// //                 break;
// //             }
// //         }
// //         if (flag == true)
// //             cout << "YES" << endl;
// //     }
// // }
// // // #include <iostream>
// // // #include <string>

// // // using namespace std;

// // // bool is_noble_vowel_string(string s)
// // // {
// // //     string vowels = "aeiouAEIOU";
// // //     for (int i = 0; i < s.length() - 1; i++)
// // //     {
// // //         if (vowels.find(s[i]) == string::npos && vowels.find(s[i + 1]) == string::npos && s[i] != 'n' && s[i + 1] != 'N')
// // //         {
// // //             return false;
// // //         }
// // //     }
// // //     return true;
// // // }

// // // int main()
// // // {
// // //     int testcases;
// // //     cin >> testcases;
// // //     while (testcases--)
// // //     {
// // //         string s;
// // //         // cout << "Enter a string: ";
// // //         cin >> s;

// // //         if (is_noble_vowel_string(s))
// // //         {
// // //             cout << "YES" << endl;
// // //         }
// // //         else
// // //         {
// // //             cout << "NO" << endl;
// // //         }
// // //     }
// // //     return 0;
// // // }
// #include <iostream>
// #include <string>

// using namespace std;

// bool is_noble_vowel_string(string s)
// {
//     string vowels = "aeiouAEIOU";
//     for (int i = 0; i < s.length() - 1; i++)
//     {
//         if (vowels.find(s[i]) == string::npos && s[i] != 'n' && s[i] != 'N')
//         {
//             if (vowels.find(s[i + 1]) == string::npos)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         if (is_noble_vowel_string(s))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define TT     \
    ll tt;     \
    cin >> tt; \
    while (tt--)

typedef long long ll;
typedef long double ld;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TT
    {
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (!isVowel(s[i]))
            {
                if (!isVowel(s[i + 1]) && s[i + 1] != 'n')
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}