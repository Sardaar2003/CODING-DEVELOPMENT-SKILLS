#include <bits/stdc++.h>
using namespace std;
int MatrixChainOrder(vector<int> &data, int n)
{

    int m[n][n];

    int i, j, k, L, q;

    for (i = 1; i < n; i++)
        m[i][i] = 0;

    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {

                q = m[i][k] + m[k + 1][j] + data[i - 1] * data[k] * data[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }

    return m[1][n - 1];
}

int main()
{

    int size;
    cin >> size;
    vector<int> data;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        data.push_back(element);
    }

    cout
        << MatrixChainOrder(data, size);

    return 0;
}
