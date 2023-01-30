#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack1;
    stack1.push(100);
    stack1.push(40);
    stack1.push(30);
    cout << stack1.top() << endl;
    stack1.pop();
    cout << stack1.top() << endl;
    if (stack1.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty " << endl;
    cout << stack1.size() << endl;
}