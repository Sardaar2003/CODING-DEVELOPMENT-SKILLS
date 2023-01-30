#include <bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> input;
    stack<int> output;
    void Enqueue(int data)
    {
        input.push(data);
    }
    int pop()
    {
        if (output.empty())
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int x = output.top();
        output.pop();
        return x;
    }
    void Top()
    {
        if (output.size())
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    int Size()
    {
        return input.size() + output.size();
    }
}
// Two stacks to implement one queue