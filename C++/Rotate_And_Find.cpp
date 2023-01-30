#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, numberOfBooks;
    cin >> size >> numberOfBooks;
    vector<int> result;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        result.push_back(element);
    }
    int i = 0;
    int sum = 0;
    while (sum <= numberOfBooks)
    {
        sum += result[i];
        if (sum > numberOfBooks)
        {
            break;
        }
        i++;
    }
    int j = size - 1;
    sum = 0;
    while (sum <= numberOfBooks)
    {
        sum += result[j];
        if (sum > numberOfBooks)
        {
            break;
        }
        j++;
    }
    cout << min(i, j) << endl;
}