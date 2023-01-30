#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int number_of_test_cases;
    cin >> number_of_test_cases;
    int number1, number2;
    for (int i = 0; i < number_of_test_cases; i++)
    {
        cin >> number1 >> number2;
        cout << abs(number1 - number2) << endl;
    }
    return 0;
}