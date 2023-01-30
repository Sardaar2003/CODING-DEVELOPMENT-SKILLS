#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    int finalArray[size];
    finalArray[0] = -1;
    for (int i = 1; i < size; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (array[i] > array[j])
            {
                finalArray[i] = array[j];
                break;
            }
            else
            {
                finalArray[i] = -1;
            }
        }
    }
    for (int j = 0; j < size; j++)
        cout << finalArray[j] << endl;
}