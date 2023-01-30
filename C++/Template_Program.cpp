#include <iostream>
#include <math.h>

using namespace std;
template <class T>
T square(T x)
{
    return pow(x, 2);
};
template <class T>
T cube(T y)
{
    return pow(y, 3);
};
int main()
{
    cout << "The square of the number 3 : " << square(3) << "\n";
    cout << "The cube of the number 5 : " << cube(5) << "\n";
    return 0;
}
