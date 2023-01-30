#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5][10], B[10][8], C[8][12], D[12][15];
    int cost1, cost2, cost3, cost4, cost5;

    // Assume that the matrices are already initialized with values

    // Option 1: ((AB)C)D
    cost1 = 5 * 10 * 8 * 12 * 15;
    cout << "Cost of ((AB)C)D: " << cost1 << endl;

    // Option 2: (A(BC))D
    cost2 = 5 * 8 * 12 * 12 * 15;
    cout << "Cost of (A(BC))D: " << cost2 << endl;

    // Option 3: (AB)(CD)
    cost3 = 5 * 10 * 8 * 12 * 15;
    cout << "Cost of (AB)(CD): " << cost3 << endl;

    // Option 4: A((BC)D)
    cost4 = 5 * 8 * 12 * 12 * 15;
    cout << "Cost of A((BC)D): " << cost4 << endl;

    // Option 5: A(B(CD))
    cost5 = 5 * 10 * 12 * 15;
    cout << "Cost of A(B(CD)): " << cost5 << endl;

    return 0;
}
