#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size, minamt;
        cin >> size >> minamt;
        vector<int> sal(size);
        for (int i = 0; i < size; i++)
            cin >> sal[i];
        sort(sal.begin(), sal.end());
        reverse(sal.begin(), sal.end());
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < size; i++)
        {
            if (sum >= minamt)
            {
                break;
            }
            sum += sal[i];
            cnt++;
        }
        if (cnt == size)
        {
            cout << 0 << endl;
        }
        else
            cout << size - cnt << endl;
    }
}