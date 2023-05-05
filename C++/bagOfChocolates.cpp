// #include <bits/stdc++.h>
// using namespace std;
// // #define mod 1e6 + 3;
// long long bagOfChocolate(long long i, vector<long long> &array)
// {
//     // int mod = 1e6 + 3;
//     // if (i < 0)
//     //     return 0;
//     if (i <= 0)
//         return array[i];
//     if (array[i] != -1)
//         return array[i];
//     return array[i] = ((i) * (bagOfChocolate(i - 1, array)));
// }
// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         long long n, k;
//         cin >> n >> k;
//         vector<long long> array(n + 1, -1);
//         array[0] = k;
//         if (k == 1)
//         {
//             cout << k * n << endl;
//         }
//         else
//         {
//             bagOfChocolate(n, array);
//             // for (int i = 0; i < array.size(); i++)
//             // {
//             //     cout << array[i] << " ";
//             // }
//             if (k != 1)
//                 cout << array[array.size() - 1] << endl;
//         }
//     }
// }
#include <iostream>
#include <cmath>

using namespace std;

const int mod = 1e6 + 3;

int powMod(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (1ll * res * a) % mod;
        }
        a = (1ll * a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int k, i;
        cin >> i >> k;
        cout << (1ll * k * powMod(i, i - 1)) % mod << endl;
    }
    return 0;
}
