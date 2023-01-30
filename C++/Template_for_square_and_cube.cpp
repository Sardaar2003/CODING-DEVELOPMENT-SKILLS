#include <iostream>
using namespace std;
template <class T>
T square(T x)
{
    return x * x;
}
template <class T>
T cube(T y)
{
    return y * y * y;
}
int main()
{
    int num;
    float num2;
    double num3;
    // long num4;
    cout << "Enter the number : " << endl;
    cin >> num;
    cout << "The square : " << square<int>(num) << endl;
    cout << "The cube : " << cube<int>(num) << endl;
    cout << "Enter the number in float : " << endl;
    cin >> num2;
    cout << "The square : " << square<float>((float)num) << endl;
    cout << "The cube : " << cube<float>((float)num) << endl;
    cout << "Enter the number in double : " << endl;
    cin >> num3;
    cout << "The square : " << square<double>((double)num) << endl;
    cout << "The cube : " << cube<double>((double)num) << endl;
    return 0;
}