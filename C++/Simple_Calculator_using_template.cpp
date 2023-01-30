#include <iostream>
using namespace std;
template <class T>
class A
{
    T number1, number2;

public:
    A(T x, T y)
    {
        number1 = x;
        number2 = y;
    }
    void print_values()
    {
        cout << "The addition of two number : " << addition() << endl;
        cout << "The substraction of two number : " << substraction() << endl;
        cout << "The multiplication of two number : " << multiplication() << endl;
        cout << "The division of two number : " << division() << endl;
    }
    T addition()
    {
        return number1 + number2;
    }
    T multiplication()
    {
        return number1 * number2;
    }
    float division()
    {
        return number1 / number2;
    }
    T substraction()
    {
        return number1 - number2;
    }
};
int main()
{

    A<int> intCalc(12, 32);
    A<float> floatCalc(2.4, 1.2);
    intCalc.print_values();
    floatCalc.print_values();
    return 0;
}