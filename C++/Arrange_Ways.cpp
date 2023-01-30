#include <bits/stdc++.h>
using namespace std;
int combinatrics(int a, int b)
{
    int answer = 1;
    for (int i = 1; i <= b; i++)
    {
        answer *= (a - b + i);
        answer /= i;
    }
    return answer;
}
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int numberOfMan, numberOfWomen, numberMen, numberWomen;
        cin >> numberOfMan >> numberOfWomen >> numberMen >> numberWomen;
        cout << combinatrics(numberOfMan, numberMen) * combinatrics(numberOfWomen, numberWomen) << endl;
    }
    return 0;
}