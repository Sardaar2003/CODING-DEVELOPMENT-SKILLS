#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getLcs(const string &X, const string &Y, int m, int n)
{
    vector<int> lcs;
    int d = (m + n + 1) >> 1;
    int k = n - d;

    // base case
    if (n == 0)
    {
        return lcs;
    }
    if (m == 1)
    {
        for (int i = 0; i < n; ++i)
        {
            if (X[0] == Y[i])
            {
                lcs.push_back(0);
                lcs.push_back(i);
                break;
            }
        }
        return lcs;
    }

    // get middle elements of X and Y
    int x = (m >> 1);
    int y = k - 1;

    // recursively get the lcs of the left and right half of X and Y
    vector<int> lcs1 = getLcs(X, Y, x, y);
    vector<int> lcs2 = getLcs(X + x, Y + y + 1, m - x, n - y - 1);

    // combine the results from the left and right half
    for (int i = 0; i < lcs1.size(); i += 2)
    {
        int x1 = lcs1[i];
        int y1 = lcs1[i + 1];
        for (int j = 0; j < lcs2.size(); j += 2)
        {
            int x2 = lcs2[j];
            int y2 = lcs2[j + 1];
            if (x1 + x2 + 1 == x && y1 + y2 + 1 == n - x)
            {
                lcs.push_back(x1);
                lcs.push_back(y1);
                return lcs;
            }
        }
    }

    // compare the middle elements
    if (X[x - 1] == Y[k - 1])
    {
        lcs.push_back(x - 1);
        lcs.push_back(k - 1);
    }

    return lcs;
}

int main()
{
    string X = "XMJYAUZ";
    string Y = "MZJAWXU";
    int m = X.length();
    int n = Y.length();
    vector<int> lcs = getLcs(X, Y, m, n);

    cout << "LCS length: " << lcs.size() / 2 << endl;
    cout << "LCS: ";
    for (int i = 0; i < lcs.size(); i += 2)
    {
        cout << X[lcs[i]];
    }
    cout << endl;

    return 0;
}
