// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the
// value of ncr effectively
int ncr(int n, int r)
{

    // Initialize the answer
    int ans = 1;

    for (int i = 1; i <= r; i += 1)
    {

        // Divide simultaneously by
        // i to avoid overflow
        ans *= (n - r + i);
        ans /= i;
    }
    return ans;
}

// Function to return the count of required ways
int totalWays(int X, int Y, int M, int W)
{
    return (ncr(M, X) * ncr(W, Y));
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int M, W, X, Y;
        cin >> M >> W >> X >> Y;
        cout << totalWays(X, Y, M, W) << endl;
    }
    // int X = 2, Y = 1, M = 3, W = 2;

    // cout << totalWays(X, Y, M, W);

    return 0;
}
