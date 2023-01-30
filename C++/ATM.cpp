#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    float ammountOfCash, accountBalance;
    cin >> ammountOfCash >> accountBalance;
    float netValue = ammountOfCash + 0.50;
    if (netValue <= accountBalance && (int)ammountOfCash % 5 == 0)
    {
        cout << fixed << setprecision(2);
        cout << accountBalance - netValue << endl;
    }
    else
    {
        cout << accountBalance << endl;
    }
}