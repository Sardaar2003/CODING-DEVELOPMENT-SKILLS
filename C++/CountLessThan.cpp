#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size1;
        cin >> size1;
        vector<int> a(size1);
        for (int i = 0; i < size1; i++)
            cin >> a[i];
        int size2;
        cin >> size2;
        vector<int> b(size2);
        for (int i = 0; i < size2; i++)
            cin >> b[i];
        vector<int> data;
        for (int i = 0; i < size1; i++)
        {
            int element = a[i];
            int count = 0;
            // cout << "Element : " << element << endl;
            for (int j = 0; j < size2; j++)
            {
                if (b[j] <= element)
                {
                    count++;
                    // cout << "Count : " << count << endl;
                }
            }
            data.push_back(count);
        }
        for (int i = 0; i < data.size(); i++)
            cout << data[i] << " ";
    }
    return 0;
}