#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int x, y;
    cin >> x >> y;
    vector<vector<int>> data(row, vector<int>(col, 0));
    data[x - 1][y - 1] = 1;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (data[i][j] == 0)
            {
                if (i < col && j < row && data[j][i] == 0)
                {
                    data[j][i] = 1;
                    data[i][j] = 1;
                    count += 1;
                }
            }
        }
    }
    cout << count << endl;
}