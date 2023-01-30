#include <bits/stdc++.h>
using namespace std;
set<int> generateNumbers(int m, int n)
{
    if (n == 1)
    {
        return {m};
    }
    else
    {
        set<int> numbers;
        for (int i = 0; i <= 9; i++)
        {
            for (int num : generateNumbers(i, n - 1))
            {
                if (i == m)
                {
                    numbers.insert(i * pow(10, n - 1) + num);
                }
            }
        }
        return numbers;
    }
}

int main()
{
    int m = 2, n = 6;
    set<int> numbers = generateNumbers(m, n);

    for (int num : numbers)
    {
        cout << num << endl;
    }
    return 0;
}
