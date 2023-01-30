#include <bits/stdc++.h>
using namespace std;
struct Items
{
    int firstValue;
    int secondValue;
    int totalValue;
};
bool comparitor(Items a, Items b)
{
    if (a.totalValue == b.totalValue)
        return a.firstValue < b.firstValue;
    return a.totalValue < b.totalValue;
}
int main()
{
    int size;
    cin >> size;
    Items array[size];
    int first;
    int second;
    for (int i = 0; i < size; i++)
    {
        cin >> first >> second;
        array[i].firstValue = first;
        array[i].secondValue = second;
        array[i].totalValue = first + second;
    }
    sort(array, array + size, comparitor);
    for (int i = 0; i < size; i++)
    {
        cout << array[i].firstValue << " "
             << " + " << array[i].secondValue << " "
             << " = " << array[i].totalValue << endl;
    }
}