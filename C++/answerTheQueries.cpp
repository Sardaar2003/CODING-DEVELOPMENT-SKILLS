#include <bits/stdc++.h>
using namespace std;
void printCountandSum(vector<int> result, int num)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] <= num)
        {
            count++;
            sum += result[i];
        }
    }
    cout << count << " " << sum << endl;
}
int main()
{
    int size;
    cin >> size;
    vector<int> result(size);
    for (int i = 0; i < size; i++)
    {
        cin >> result[i];
    }
    int numberOfQueries;
    cin >> numberOfQueries;
    for (int i = 0; i < numberOfQueries; i++)
    {
        int element;
        cin >> element;
        printCountandSum(result, element);
    }
    return 0;
}