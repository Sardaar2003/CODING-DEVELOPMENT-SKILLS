#include <bits/stdc++.h>
using namespace std;
long long squareRoot(long long num)
{
    if (num == 1 || num == 2)
        return num;
    long long start = 1;
    long long stop = num / 2;
    long long ans;
    while (start <= stop)
    {
        long long midVal = (start + stop) / 2;
        if (midVal * midVal == num)
            return midVal;
        if (midVal * midVal < num)
        {
            ans = midVal;
            start = midVal + 1;
        }
        else
        {
            // ans = midVal;
            stop = midVal - 1;
        }
    }
    return ans;
}
int main()
{
    long long number;
    cin >> number;
    // if (number == 0 || number == 1)
    //     cout << number << endl;
    // else
    // {
    //     long long i = 1;                      This is a brute force Algorithm to solve the square root
    //     while (i * i <= number)
    //         i++;
    //     cout << i - 1 << endl;
    // }
    cout << squareRoot(number) << endl;
}