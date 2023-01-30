#include <iostream>
using namespace std;
template <class T>
class A
{
public:
    T num1 = 5;
    T num2 = 3;
    void set_data(T x)
    {
        num1 = x;
    }
    T testdata()
    {
        return num1;
    }
    void add()
    {
        cout << "The addition : " << num1 + num2 << endl;
    }
};
int main()
{
    A<int> d;
    d.add();
    d.set_data(4);
    cout << d.testdata() << endl;
    return 0;
}