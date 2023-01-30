#include <bits/stdc++.h>
#include <cmath>
using namespace std;
bool PrimeOrNot(int a)
{
    if (a > 2)
    {
        for (int i = 2; i <= (int)sqrt(a); i++)
        {
            if (a % i == 0)
                return false;
        }

        return true;
    }
    else if (a == 1 || a == 2)
    {
        return true;
    }
}

int main()
{
    int testCases, kthValue;
    cin >> testCases >> kthValue;
    for (int i = 0; i < testCases; i++)
    {
        // int firstNum, secondNum;
        int Number;
        cin >> Number;
        int size = floor(log10(Number)) + 1;
        vector<int> result(size, 0);
        int k = 0;
        while (Number > 0)
        {
            int remain = Number % 10;
            result[k] = remain;
            Number /= 10;
            k++;
        }
        // cout<<"Hi"<<endl;
        // cout << result[k - 1] << endl;
        // cout << k << endl;
        // cout<<PrimeOrNot(result[0])<<endl;

        if (PrimeOrNot(result[0]) && PrimeOrNot(result[size - 1]) && (result[0] + result[size - 1]) > kthValue)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        // cout << size << endl;
    }
}