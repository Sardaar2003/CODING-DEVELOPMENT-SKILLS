#include <bits/stdc++.h>
using namespace std;
void permut(int numZero, int numOne, string val, vector<string> &permuta)
{
    if (numOne == 0)
    {
        for (int i = 0; i < numZero; i++)
        {
            val += "0";
        }
        permuta.push_back(val);
        return;
    }
    else if (numZero == 0)
    {
        for (int i = 0; i < numOne; i++)
        {
            val += "1";
        }
        permuta.push_back(val);
        return;
    }
    permut(numZero, numOne - 1, val + "1", permuta);
    permut(numZero - 1, numOne, val + "0", permuta);
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int number;
        cin >> number;
        int numberOfZeros = 0;
        int numberOfOnes = 0;

        while (number > 0)
        {
            if (number & 1)
            {
                numberOfOnes++;
            }
            else
            {
                numberOfZeros++;
            }
            number = number >> 1;
        }
        vector<string> permutation;
        string data = "";
        permut(numberOfZeros, numberOfOnes, data, permutation);
        sort(permutation.begin(), permutation.end());
        for (int i = 0; i < permutation.size(); i++)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
}