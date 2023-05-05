#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int p = 31;      // prime number for hashing
const int m = 1e9 + 9; // mod value for hashing

vector<int> rabin_karp(string const &s, string const &t)
{
    int S = s.size(), T = t.size();
    vector<long long> p_pow(max(S, T)); // powers of p modulo m
    p_pow[0] = 1;
    for (int i = 1; i < (int)p_pow.size(); i++)
        p_pow[i] = (p_pow[i - 1] * p) % m;

    vector<long long> h(T + 1, 0); // hash values for the prefixes of t
    for (int i = 0; i < T; i++)
        h[i + 1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m;

    long long h_s = 0; // hash value for s
    for (int i = 0; i < S; i++)
        h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m;

    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; i++)
    {
        long long cur_h = (h[i + S] + m - h[i]) % m;
        if (cur_h == h_s * p_pow[i] % m)
            occurences.push_back(i);
    }
    return occurences;
}

int main()
{
    string s, t;
    getline(cin, s); // read input string s
    getline(cin, t); // read input string t

    vector<int> occurences = rabin_karp(s, t);

    for (int i = 0; i < (int)occurences.size(); i++)
        cout << occurences[i] << " ";
    cout << endl;

    return 0;
}
