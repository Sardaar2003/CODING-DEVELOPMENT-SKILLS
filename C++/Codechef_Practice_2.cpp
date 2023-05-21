#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size, k;
        cin >> size >> k;
        vector<int> data(size);
        for (int i = 0; i < size; i++)
            cin >> data[i];
        sort(data.begin(), data.end());
        int sum = accumulate(data.begin() + k, data.end() - k, 0);
        int diff = data.size() - 2 * k;
        // cout << sum << " " << diff << endl;
        // double avg = sum / diff;

        cout << fixed << setprecision(6) << static_cast<float>((float)sum / diff) << endl;
    }
}