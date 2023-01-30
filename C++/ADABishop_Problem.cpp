#include <iostream>
using namespace std;
void printPath();
int main()
{
    int testCases;
    cin >> testCases;
    int row, column;
    for (int i = 0; i < testCases; i++)
    {
        cin >> row >> column;
        if (row == 1 && column == 1)
        {
            cout << 17 << endl;
            printPath();
        }
        else if (row == column)
        {
            cout << 18 << endl;
            cout << row << " " << column << endl;
            printPath();
        }
        else
        {
            cout << 19 << endl;
            cout << row << " " << column << endl;
            int distance = (row + column) / 2;
            cout << distance << " " << distance << endl;
            printPath();
        }
    }
    return 0;
}
void printPath()
{
    cout << 1 << " " << 1 << endl;
    cout << 8 << " " << 8 << endl;
    cout << 7 << " " << 7 << endl;
    cout << 6 << " " << 8 << endl;
    cout << 1 << " " << 3 << endl;
    cout << 3 << " " << 1 << endl;
    cout << 8 << " " << 6 << endl;
    cout << 7 << " " << 5 << endl;
    cout << 8 << " " << 4 << endl;
    cout << 5 << " " << 1 << endl;
    cout << 1 << " " << 5 << endl;
    cout << 4 << " " << 8 << endl;
    cout << 3 << " " << 7 << endl;
    cout << 2 << " " << 8 << endl;
    cout << 1 << " " << 7 << endl;
    cout << 7 << " " << 1 << endl;
    cout << 8 << " " << 2 << endl;
}