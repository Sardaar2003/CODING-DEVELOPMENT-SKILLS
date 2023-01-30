#include <iostream>
using namespace std;
template <class T>
T product(T x, T y)
{
    return (x * y);
}
int main()
{
    cout << "The product of two integers " << product<int>(12, 42) << endl;
    cout << "The product of two float " << product<float>(2.32, 12.42) << endl;
    cout << "The product of two double " << product<double>(132.423, 12.32) << endl;
    return 9;
}