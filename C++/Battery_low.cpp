#include <iostream>
using namespace std;
int main()
{
    int number;
    int value;
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        cin >> value;
        if (value <= 15)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}