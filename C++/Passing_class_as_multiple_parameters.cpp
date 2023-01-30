#include <iostream>
using namespace std;
template <typename T1, typename T2>
class A
{
    T1 x;
    T2 y;

public:
    void set_data(T1 num1, T2 num2)
    {
        x = num1;
        y = num2;
    }
    void display()
    {
        cout << "The two values of x and y " << x << " and " << y << endl;
    }
};
int main()
{
    A<int, float> object1;
    object1.set_data(12, 42.21);
    object1.display();
    return 0;
}