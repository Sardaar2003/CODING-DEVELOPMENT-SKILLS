#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    int x;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        s.insert(x);
    }
    s.erase(12);
    cout << s.size() << endl;
    if (s.find(50) != s.end())
        cout << "It is there" << endl;
    else
        cout << "It is not there " << endl;
    unordered_set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}