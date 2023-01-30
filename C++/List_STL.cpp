#include <bits/stdc++.h>
#include <list>
using namespace std;
int main()
{
    list<int> list1;
    // list<int> list2(5); // Allocation of size to the list
    cout << list1.size() << endl;
    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        list1.push_back(x);
    }
    list<int>::iterator itr;
    // list1.push_front(302);
    // list1.pop_back();
    // list1.sort();
    // list1.reverse();
    list<int> list2;
    list2 = list1;
    list1.merge(list2);
    for (itr = list1.begin(); itr != list1.end(); itr++)
    {
        cout << *itr << " ";
    }
}