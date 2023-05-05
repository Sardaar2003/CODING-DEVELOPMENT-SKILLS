#include <bits/stdc++.h>
using namespace std;
void fn(string data, int &count)
{
    if (count == 5)
        return;
    cout << data << endl;
    count++;
    fn(data, count);
}
int main()
{
    int count = 0;
    string data = "Hi";
    fn(data, count);
    return 0;
}