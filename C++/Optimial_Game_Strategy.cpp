#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    int size;
    cin >> size;
    // cout << size << endl;
    stack<int> result;
    stack<int> finalresult;
    stack<int> reversed;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        result.push(ele);
    }
    finalresult = result;

    while (!result.empty())
    {
        int ele = result.top();
        reversed.push(ele);
        result.pop();
    }
    // while(!reversed.empty()){
    //     cout<<" "<<reversed.top()<<endl;
    //     reversed.pop();
    // }
    // cout<< finalresult.size()<<" "<<reversed.size()<<endl;
    while (!finalresult.empty() && !reversed.empty())
    {
        // cout<<"Started "<<endl;
        int element1 = finalresult.top();
        int element2 = reversed.top();
        // cout<<element1<<" "<<element2<<endl;
        if (element1 > element2)
        {
            cout << 2 << " ";
            reversed.pop();
        }
        else if (element2 > element1)
        {
            cout << 1 << " ";
            finalresult.pop();
        }
        else if (element1 == element2)
        {
            cout << 0 << " ";
            reversed.pop();
            finalresult.pop();
        }
    }
}