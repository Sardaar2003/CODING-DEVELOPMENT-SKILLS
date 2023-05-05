// // #include <bits/stdc++.h>
// // using namespace std;
// // void SieveOfEratosthenes(int n, vector<int> &prime)
// // {
// //     vector<bool> isPrime(n, true);
// //     // vector<int> prime;
// //     for (int i = 2; i <= n; i++)
// //     {
// //         for (int j = i * i; j <= n; j += i)
// //         {
// //             if (isPrime[i] == true)
// //                 isPrime[j] = false;
// //         }
// //     }
// //     for (int i = 2; i <= n; i++)
// //         if (isPrime[i] == true)
// //             prime.push_back(i);
// // }
// // int main()
// // {
// //     int testcases;
// //     int element;
// //     cin >> testcases;
// //     while (testcases--)
// //     {
// //         vector<int> prime;
// //         int a, b, k;
// //         cin >> a >> b >> k;
// //         SieveOfEratosthenes(b, prime);
// //         int l = lower_bound(prime.begin(), prime.end(), a) - prime.begin();
// //         int r = upper_bound(prime.begin(), prime.end(), b) - prime.begin();
// //         for (int i = l; i < r; i++)
// //         {
// //             element = prime[i];
// //             k -= 1;
// //             if (k == 0)
// //                 break;
// //         }
// //         if (k == 0)
// //             cout << element << endl;
// //         else
// //             cout << -1 << endl;
// //     }
// // }

// bool isPrime(int a)
// {
//     for (int i = 2; i <= (int)(a / 2); i++)
//     {
//         if (a % i == 0)
//             return false;
//     }
//     return true;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         int a, b, k;
//         vector<int> dp;
//         cin >> a >> b >> k;
//         for (int i = a; i <= b; i++)
//         {
//             if (isPrime(i))
//                 dp.push_back(i);
//         }
//         // for (int i = 0; i < dp.size(); i++)
//         //     cout << dp[i] << " ";
//         if (dp.size() >= k)
//             cout << dp[k - 1] << endl;
//         else
//             cout << -1 << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool> check(9, true);
    check[0] = false;
    check[4] = false;
    check[7] = false;
    for (int i = 0; i < 9; i++)
        cout << check[i] << " ";
    check.erase();
    cout << endl;
    for (int i = 0; i < 9; i++)
        cout << check[i] << " ";
}