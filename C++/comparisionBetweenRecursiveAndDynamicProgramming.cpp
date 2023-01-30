#include <bits/stdc++.h>
using namespace std;
int main()
{
    int range;
    cin >> range;
    cout << "\t\t2^n"
         << "\t\t\t\t\t\t"
         << "n^3" << endl;
    for (int i = 1; i <= range; i++)
    {
        cout << i << "\t\t" << pow(2, i) << "\t\t\t\t\t\t" << pow(i, 3) << endl;
    }
    return 0;
}