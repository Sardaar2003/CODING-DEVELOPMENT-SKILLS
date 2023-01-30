#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    double a1 = (double)a.first / (double)a.second;
    double a2 = (double)b.first / (double)b.second;
    return a1 > a2;
}

int main()
{
    int size;
    cin >> size;
    vector<pair<int, int>> data;
    for (int i = 0; i < size; i++)
    {
        int price, weight;
        cin >> price >> weight;
        pair<int, int> a = make_pair(price, weight);
        data.push_back(a);
    }
    int weight;
    cin >> weight;
    sort(data.begin(), data.end(), comp);
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (weight >= data[i].second)
        {
            weight -= data[i].second;
            ans += data[i].first;
        }
        else
        {
            ans += data[i].first * ((double)weight / (double)data[i].second);
            break;
        }
    }
    cout << ans << endl;
}