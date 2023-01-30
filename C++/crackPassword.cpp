#include <bits/stdc++.h>
using namespace std;
bool checkNum(int num)
{
    bool flag = true;
    int value = num;
    while (value > 0)
    {
        int remainder = value % 10;
        if (remainder == 0)
            return false;
        value /= 10;
    }
    return true;
}
void RecursiveThread(int size, int value)
{
    if (floor(log10(value + 1) + 1) > size)
        return;
    if (checkNum(value + 1))
        cout << value + 1 << endl;
    RecursiveThread(size, value += 1);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        // cout<<floo
        // cout << floor(log10(100)) + 1 << endl;
        RecursiveThread(size, pow(10, size - 1));
    }
}