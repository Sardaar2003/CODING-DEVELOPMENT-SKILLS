#include <iostream>
using namespace std;

template <class t1, class t2>
float product(t1 x, t2 y)
{
    return (x * y);
}
int main()
{
    cout << product(11, 10) << endl;
    cout << product(2.3, 1.2) << endl;
    cout << product(5, 1.2) << endl;
    cout << product(2.5, 5) << endl;
    return 0;
}