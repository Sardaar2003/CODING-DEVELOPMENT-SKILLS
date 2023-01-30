#include <iostream>
using namespace std;
template <typename T, typename U>
U add(T x, U y)
{
    return (x + y);
}
int main()
{
    cout << "The summation : " << add<int, double>(2, 1.32);
    return 0;
}