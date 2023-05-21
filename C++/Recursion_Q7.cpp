#include <bits/stdc++.h>
using namespace std;
bool reverse(string reversedata, int i, int n)
{
    if (i >= n / 2)
        return true;
    if (reversedata[i] != reversedata[n - i - 1])
        return false;
    return reverse(reversedata, i + 1, n);
}
int main()
{
    string data, reversedata;
    cin >> data;
    reversedata = data;
    if (reverse(reversedata, 0, data.length()) == true)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
}