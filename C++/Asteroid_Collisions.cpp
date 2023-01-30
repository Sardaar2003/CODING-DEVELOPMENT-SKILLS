#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> asteroids;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        asteroids.push_back(ele);
    }
    vector<int> result;
    int j = 0;
    while (j < asteroids.size())
    {
        if (!result.empty() && (result.back() == 0 && asteroids[j] < 0 || result.back() < 0 && asteroids[j] <= 0))
        {
            if (abs(result.back()) < abs(asteroids[j]))
            {
                result.pop_back();
                // i++;
                continue;
            }
            if (abs(result.back()) > abs(asteroids[j]))
            {
                j++;
                continue;
            }
            if (abs(result.back()) == abs(asteroids[j]))
            {
                j++;
                result.pop_back();
            }
        }
        else
        {
            result.push_back(asteroids[j++]);
            continue;
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] != 0)
            cout << result[i] << " ";
    }
    // for (int i = 0; i < n; i++)
    //     cout << asteroids[i] << " ";
}