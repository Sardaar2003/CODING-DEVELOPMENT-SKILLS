#include <bits/stdc++.h>
using namespace std;
int numberNine(int n)
{
    vector<int> data;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && find(data.begin(), data.end(), i) != data.end())
        {
            data.push_back(i);
        }
    }
    return data.size();
}
int countDivisorNine(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (numberNine(i) == 9)
            count++;
    }
    return count;
}
int main()
{
    int num;
    cin >> num;
    cout << countDivisorNine(num) << endl;
}