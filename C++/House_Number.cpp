#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long total_digits(int num)
{
    long long count = 0;
    for (int i = 1; i <= num; i *= 10)
    {
        count = count + (num - i + 1);
    }
    return count;
}
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int number;
        cin >> number;

        cout << total_digits(number) << endl;
    }
}