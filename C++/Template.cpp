#include <iostream>
using namespace std;

template <typename T>
T product(T x, T y)
{
    return (x * y);
}
int main()
{
    cout << product<int>(5, 5) << endl;
    cout << product<float>(5.5, 1.2) << endl;
    cout << product<double>(5.1223, 1234.35) << endl;
    return 0;
}