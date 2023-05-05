#include <bits/stdc++.h>
using namespace std;
long long int difference(vector<vector<int>> &data, int i, int j)
{

    long long int zeroRow = 0, zeroCol = 0, oneRow = 0, oneCol = 0;
    for (int a = 0; a < data[0].size(); a++)
    {
        if (data[i][a] == 1)
            oneRow++;
        else
            zeroRow++;
    }
    for (int a = 0; a < data.size(); a++)
    {
        if (data[a][j] == 1)
            oneCol++;
        else
            zeroCol++;
    }
    // cout << oneRow << " " << oneCol << " " << zeroRow << " " << zeroCol << endl;
    return oneRow + oneCol - zeroRow - zeroCol;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int row1, col1;
        cin >> row1 >> col1;
        vector<vector<int>> data(row1, vector<int>(col1));
        for (int i = 0; i < row1; i++)
            for (int j = 0; j < col1; j++)
                cin >> data[i][j];
        // Method is good but time complexity is more.
        // vector<vector<int>> result(row, vector<int>(col));
        // for (int i = 0; i < row; i++)
        //     for (int j = 0; j < col; j++)
        //         result[i][j] = difference(data, i, j);
        // Method 2 Time complexity is less.
        vector<int> row(data.size());
        vector<int> col(data[0].size());
        for (int i = 0; i < data.size(); i++)
        {
            for (int j = 0; j < data[0].size(); j++)
            {
                row[i] += data[i][j];
                col[j] += data[i][j];
            }
        }
        vector<vector<int>> result(data.size(), vector<int>(data[0].size()));
        for (int i = 0; i < data.size(); i++)
        {
            for (int j = 0; j < data[0].size(); j++)
            {
                result[i][j] = 2 * row[i] + 2 * col[j] - data.size() - data[0].size();
            }
        }
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[0].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}