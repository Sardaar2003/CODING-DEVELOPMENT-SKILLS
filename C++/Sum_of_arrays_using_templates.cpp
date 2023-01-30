#include <iostream>
#define max_value 100
using namespace std;
template <class T>
T summation(T arr[], int n)
{
    T result = arr[0];
    for (int i = 0; i < n; i++)
    {
        result += arr[i];
    }
    return result;
}
int main()
{
    int array1[max_value];
    float array2[max_value];
    int size1;
    int size2;
    cout << "Enter the size of the array : ";
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        cin >> array1[i];
    }
    cout << "Enter the size of the array : ";
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }
    cout << summation<int>(array1, size1) << endl;
    cout << summation<float>(array2, size2) << endl;
    return 0;
}