// #include <iostream>
// using namespace std;
// int main()
// {
//     int testCases;
//     cin >> testCases;
//     int hits = 0;
//     int strength, width1, width2, width3;
//     int summation;
//     for (int i = 0; i < testCases; i++)
//     {
//         hits = 0;
//         cin >> strength >> width1 >> width2 >> width3;
//         summation = width1 + width2 + width3;
//         while (summation >= 0)
//         {
//             summation -= strength;
//             hits++;
//         }
//         cout << hits << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    int hits = 0;
    int strength, width1, width2, width3;
    int summation;
    for (int i = 0; i < testCases; i++)
    {
        hits = 0;
        cin >> strength >> width1 >> width2 >> width3;
        summation = width1 + width2 + width3;
        if (width1 + width2 + width3 <= strength)
        {
            cout << 1 << endl;
        }
        else
        {
            if (width1 + width2 <= strength || width2 + width3 <= strength)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }

    return 0;
}