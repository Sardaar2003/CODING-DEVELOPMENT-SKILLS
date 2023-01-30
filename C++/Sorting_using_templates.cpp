#include <iostream>
#define max_value 100
using namespace std;
template <class T>
void sorting(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                T result = arr[i];
                arr[i] = arr[j];
                arr[j] = result;
            }
        }
    }
}
int main()
{
    int array[max_value];
    float array2[max_value];
    int size1;
    int size2;
    cout << "Enter the size of the integer array : ";
    cin >> size1;
    cout << "Enter the elements in the integer array : ";
    for (int i = 0; i < size1; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the size of the float array : ";
    cin >> size2;
    cout << "Enter the elements in the float array : ";
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }
    sorting(array, size1);
    cout << "The integer array sorted : \n";
    for (int i = 0; i < size1; i++)
    {
        cout << array[i] << "\n";
    }
    sorting(array2, size2);
    cout << "The float array sorted : \n";
    for (int i = 0; i < size2; i++)
    {
        cout << array2[i] << "\n";
    }

    return 0;
}