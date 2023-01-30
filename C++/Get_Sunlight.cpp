#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        int count = 1;
        int current_element = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] > current_element || array[i] == current_element)
            {
                count++;
                current_element = array[i];
            }
        }
        cout << count << endl;
    }
}
