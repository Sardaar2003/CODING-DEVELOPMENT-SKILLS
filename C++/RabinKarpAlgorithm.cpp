// #include <bits/stdc++.h>
// using namespace std;
// bool charMatch(string text, string pattern, int s, int m)
// {
//     for (int j = 0; j < m; j++)
//     {
//         if (pattern[j] != text[s + j])
//             return false;
//     }
//     return true;
// }
// void RabinKarpAlgo(string text, string pattern, int d, int q)
// {
//     // cout << "here" << endl;
//     int n = text.length();
//     int m = pattern.length();
//     int h = ((int)pow(d, m - 1)) % q;
//     int p = 0;
//     vector<int> t((n - m + 1), 0);
//     for (int i = 0; i < m; i++)
//     {
//         p = (p * d + (pattern[i] - 'a')) % q;
//         t[i] = (t[0] * d + (text[i] - 'a')) % q;
//     }
//     for (int s = 0; s < n - m + 1; s++)
//     {
//         if (p == t[s])
//         {
//             if (charMatch(text, pattern, s, m))
//             {
//                 cout << "Pattern is matched at the shift : " << s << " ." << endl;
//             }
//         }
//         if (s < n - m)
//         {
//             t[s + 1] = (d * (t[s] - (text[s] - 'a') * h) + text[s + m] - 'a') % q;
//         }
//     }
// }
// int main()
// {
//     string text, pattern;
//     cin >> text >> pattern;
//     int d = 26;
//     int q = 1e9 + 7;
//     // cout << q << endl;
//     RabinKarpAlgo(text, pattern, d, q);
//     return 0;
// }
/* Following program is a C++ implementation of Rabin Karp
Algorithm given in the CLRS book */
#include <bits/stdc++.h>
using namespace std;

// d is the number of characters in the input alphabet
#define d 256

/* pat -> pattern
    txt -> text
    q -> A prime number
*/
void search(char pat[], char txt[], int q)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;

    // The value of h would be "pow(d, M-1)%q"
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;

    // Calculate the hash value of pattern and first
    // window of text
    for (i = 0; i < M; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++)
    {

        // Check the hash values of current window of text
        // and pattern. If the hash values match then only
        // check for characters one by one
        if (p == t)
        {
            /* Check for characters one by one */
            for (j = 0; j < M; j++)
            {
                if (txt[i + j] != pat[j])
                {
                    break;
                }
            }

            // if p == t and pat[0...M-1] = txt[i, i+1,
            // ...i+M-1]

            if (j == M)
                cout << "Pattern found at index " << i
                     << endl;
        }

        // Calculate hash value for next window of text:
        // Remove leading digit, add trailing digit
        if (i < N - M)
        {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;

            // We might get negative value of t, converting
            // it to positive
            if (t < 0)
                t = (t + q);
        }
    }
}

/* Driver code */
int main()
{
    char txt[] = "GEEKS FOR GEEKS";
    char pat[] = "GEEK";

    // we mod to avoid overflowing of value but we should
    // take as big q as possible to avoid the collison
    int q = INT_MAX;

    // Function Call
    search(pat, txt, q);
    return 0;
}

// This is code is contributed by rathbhupendra
