#include <bits/stdc++.h>
using namespace std;
// This is the brute force method to solve the catalan Numbers
// long long int factorial(int n)
// {
//     if (n <= 1)
//         return 1;
//     return n * factorial(n - 1);
// }
// long long int catalanNumbers(int num)
// {
//     long long int value = factorial(2 * num) / (factorial(num) * factorial(num + 1));
//     return value;
// }
// This is a Recursive Method
// unsigned long long int catalanNumbers(unsigned int n)
// {
//     if (n <= 1)
//         return 1;
//     unsigned long long int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         res += catalanNumbers(i) * catalanNumbers(n - i - 1);
//     }
//     return res;
// }
// This is the Dynamic Programming method
int modulus = 1e9 + 7;
unsigned long long int catalanNumbers(unsigned int n)
{
    unsigned long long int catalan[n + 1];
    catalan[0] = catalan[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
        {
            catalan[i] += (catalan[j] * catalan[i - j - 1]);
        }
    }
    return catalan[n];
}
int main()
{
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << catalanNumbers(i) << " ";
    }
}