#include <bits/stdc++.h>
using namespace std;
void reverse(int i, int j, vector<int> &arr)
{
    if (i >= j)
        return;
    swap(arr[i], arr[j]);
    reverse(i + 1, j - 1, arr);
}
int main()
{
    int size;
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "Before Reversing : " << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << "After Reversing : " << endl;
    reverse(0, size - 1, array);
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    return 0;
}