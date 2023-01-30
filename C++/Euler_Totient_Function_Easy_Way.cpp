#include <bits/stdc++.h>
using namespace std;
int phiFactor(int number)
{
    int result = number;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            while (number % i == 0)

                number /= i;

            result = result - result / i;
        }
    }
    if (number > 1)
    {
        result = result - result / number;
    }
    return result;
}
int main()
{
    int numberOfElements;
    cin >> numberOfElements;
    cout << phiFactor(numberOfElements) << endl;
}