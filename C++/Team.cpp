#include <bits/stdc++.h>
using namespace std;
// Link : https://codeforces.com/problemset/problem/231/A
int main()
{
    int numberOfParticipants;
    cin >> numberOfParticipants;
    int array[numberOfParticipants][3];
    for (int i = 0; i < numberOfParticipants; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }
    int count = 0;
    int finalCount = 0;
    for (int i = 0; i < numberOfParticipants; i++)
    {
        finalCount = 0;
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == 1)
                finalCount++;
        }
        if (finalCount >= 2)
            count++;
    }
    cout << count << endl;
    return 0;
}