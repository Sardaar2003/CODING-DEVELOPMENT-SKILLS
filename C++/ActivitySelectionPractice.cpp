#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> activities(n);
        for (int i = 0; i < n; i++)
        {
            cin >> activities[i].first >> activities[i].second;
        }
        sort(activities.begin(), activities.end(), cmp);
        int cnt = 1, endtime = activities[0].second;
        for (int i = 1; i < n; i++)
        {
            if (activities[i].first >= endtime)
            {
                cnt++;
                endtime = activities[i].second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
