#include <bits/stdc++.h>
using namespace std;
void solve(int N, int K, vector<long long> &data)
{

    int i = 0;
    int count = 0;
    int val = 0;
    while (data.size() != N + 1)
    {
        count += 1;
        // cout << "Count : " << count << endl;
        val += data[i];
        // cout << " val : " << val << endl;
        if (count % K == 0)
        {
            data.push_back(val);
            val = 0;
            i = data.size() - K;
            continue;
        }
        // cout << " i : " << i << endl;
        // cout << "Size : " << data.size() << endl;
        i += 1;
    }

    // cout << data[N] << endl;
    cout << data[N - 1] << endl;

    // for (int i = 0; i < data.size(); i++)
    // {
    //     cout << data[i] << " ";
    // }
}
int main()
{
    int N, K;
    vector<long long> GeekNum;
    cin >> N >> K;
    for (int i = 0; i < K; i++)
    {
        int element;
        cin >> element;
        GeekNum.push_back(element);
        // cin >> GeekNum[i];
    }
    // cout << GeekNum.size() << endl;
    solve(N, K, GeekNum);
    // cout << GeekNum.size() << endl;
    // for (int i = 0; i < GeekNum.size(); i++)
    //     cout << GeekNum[i] << "  ";
    // solve(N, K, GeekNum);
    // cout << solve(N, K, GeekNum) << endl;
}