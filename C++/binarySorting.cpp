#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfElements;
    cin >> numberOfElements;
    int array[numberOfElements];
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < numberOfElements; i++)
    {
        for (int j = 0; j < numberOfElements; j++)
        {
            if (array[j] > array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int item : array)
    {
        cout << item << " ";
    }
    return 0;
}