#include <iostream>
using namespace std;
template <class T>
T square(T number)
{
    return number * number;
}
int main()
{
    int number;
    float number2;
    double number3;
    cout << "Enter the number of int data type : ";
    cin >> number;
    cout << "Enter the number of float data type : ";
    cin >> number2;
    cout << "Enter the number of double data type : ";
    cin >> number3;
    cout << "The square of the number " << number << " : " << square<int>(number) << endl;
    cout << "The square of the number " << number2 << " : " << square<float>(number2) << endl;
    cout << "The square of the number " << number3 << " : " << square<double>(number3) << endl;
    return 0;
}