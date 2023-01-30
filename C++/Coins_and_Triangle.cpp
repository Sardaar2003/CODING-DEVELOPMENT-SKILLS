#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int j = 0; j < testCases; j++)
    {
        int height = 0;
        int number;
        cin >> number;
        int i = 1;
        while (number > 0)
        {
            if (number >= i)
            {
                number -= i;
                i++;
                height++;
            }
            else
            {
                break;
            }
        }
        cout << height << endl;
    }
}