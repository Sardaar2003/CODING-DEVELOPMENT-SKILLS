#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>
#include <string.h>

using namespace std;

int main()
{
    // pairs pracitce;
    //  // pair<string, int> students("Ram", 123);
    //  pair<string, int> students;
    //  // students.first = "Hi Everyone";
    //  // students.second = 124;
    //  students = make_pair("Shamu", 124);
    //  cout
    //      << students.first << " " << students.second << endl;
    unordered_map<int, int> map1;
    map1.insert(make_pair(12, 42));
    map1[5] = 4;
    unordered_map<int, int>::iterator itr;
    for (itr = map1.begin(); itr != map1.end(); itr++)
    {
        cout << (itr->first) << " " << (itr->second) << endl;
    }
    if (map1.find(5) != map1.end())
        cout << "Element is there";
    else
        cout << "Element is not there";
}