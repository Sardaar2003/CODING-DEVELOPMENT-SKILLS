#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int i, int j, string str)
{
    if (i >= j)
        return true;
    return (str[i] == str[j]) & isPalindrome(i + 1, j - 1, str);
}
int main()
{
    string str1;
    cin >> str1;
    cout << isPalindrome(0, str1.length() - 1, str1) << endl;
    return 0;
}
