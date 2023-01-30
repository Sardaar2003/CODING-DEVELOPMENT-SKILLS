#include <bits/stdc++.h>
using namespace std;
int alluniqueelement(int element)
{
    int data[10] = {0};
    int value = element;
    int flag = 1;
    while (element > 0)
    {
        int remainders = element % 10;

        data[remainders]++;
        if (data[remainders] > 1)
        {
            flag = 0;
            break;
        }
        element /= 10;
    }

    return flag;
}
// int main()
// {
//     cout << alluniqueelement(2011) << endl;
// }
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int element;
        cin >> element;
        // int value=element;
        element++;
        while (alluniqueelement(element) == 0)
        {
            element++;
        }
        cout << element << endl;
    }
}