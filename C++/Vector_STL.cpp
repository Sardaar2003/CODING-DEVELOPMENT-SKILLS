#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool myCompare(int x, int y)
{
    return (x > y);
}
int main()
{
    vector<int> v;
    // vector<int> b(10); Incase to provide the size to the vector
    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << v.size()
         << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++) // itr stores the address of the elements
    {
        cout << *itr << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), myCompare);
    for (itr = v.begin(); itr != v.end(); itr++) // itr stores the address of the elements
    {
        cout << *itr << " ";
    }
    itr = v.begin() + 2;
    v.insert(itr, 2, 8); // it will put 8 two times in the vector
    v.erase(v.begin() + 3, v.begin() + 5);
}