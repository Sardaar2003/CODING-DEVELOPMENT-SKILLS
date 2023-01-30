#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    int element;
    int flag = 0;
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (element == array[i])
        {
            flag = 1;
            cout << "Element Found " << endl;
        }
    }
    if (flag == 0)
        cout << "ELement not Found  " << endl;
}