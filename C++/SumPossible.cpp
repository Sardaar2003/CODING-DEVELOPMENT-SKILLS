// #include <bits/stdc++.h>
// using namespace std;
// void possibleSubset(vector<long long> &array, int l, int r, set<long long> &data, long long sum = 0)
// {
//     if (l > r)
//     {
//         data.insert(sum);
//         return;
//     }
//     possibleSubset(array, l + 1, r, data, sum + array[l]);
//     possibleSubset(array, l + 1, r, data, sum);
// }
// int main()
// {
//     int size;
//     cin >> size;
//     vector<long long> array(size);
//     for (int i = 0; i < size; i++)
//         cin >> array[i];
//     set<long long> data;
//     possibleSubset(array, 0, size - 1, data);
//     vector<long long> result;
//     set<long long>::iterator itr;
//     for (itr = data.begin(); itr != data.end(); itr++)
//     {
//         result.push_back(*itr);
//     }
//     sort(result.begin(), result.end());
//     cout << result.size() - 1 << endl;
//     for (int i = 1; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
// }
#include <bits/stdc++.h>
using namespace std;

const int N = 1005;

int n, a[N], f[N];

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            for (int j = N - 1; j >= a[i]; j--)
                f[j] = max(f[j], f[j - a[i]] + a[i]);
        int ans = 0;
        for (int i = 0; i < N; i++)
            ans = max(ans, f[i]);
        cout << ans << endl;
    }
    return 0;
}
