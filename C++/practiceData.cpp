#include <iostream>
using namespace std;

int minOperations(int X, int n)
{
    int count = 0;
    while (X < n)
    {
        int div = 1;
        while (X + X / div > n)
        {
            div++;
        }
        X += X / div;
        count++;
    }
    return count;
}

int main()
{
    int X = 1;
    int n;
    cin >> n;
    int minOps = minOperations(X, n);
    cout << minOps << endl;

    return 0;
}