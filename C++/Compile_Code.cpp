#include <iostream>
using namespace std;
int top = -1;
void push(string stack[], char value, int n)
{
    if (top == n - 1)
    {
        cout << "overflow" << endl;
        return;
    }
    top++;
    stack[top] = value;
}
int find_res(string stack[], int n)
{
    int open = 0;
    int close = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (open == close && stack[i] == ">")
            return res;
        else if (stack[i] == "<")
        {
            open++;
        }
        else
        {
            close++;
            if (open == close)
                res = close * 2;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string stack[n];
        char value;
        for (int i = 0; i < n; i++)
        {
            cin >> value;
            push(stack, value, n);
        }
        int res = find_res(stack, n);
        cout << res << endl;
        top = -1;
    }
    return 0;
}