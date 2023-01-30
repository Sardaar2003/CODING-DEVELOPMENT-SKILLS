#include <iostream>
using namespace std;
template <class T>
T add(T &a, T &b)
{
    T result = a + b;
    return result;
}

int main()
{
    int i = 2;
    int j = 4;
    float f1 = 4.32;
    float f2 = 5.45;
    cout << "The Addition of the two number : " << add<int>(i, j) << "\n";
    cout << "The Substraction of the two number : " << add<float>(f1, f2);
    return 0;
}