#include <iostream>
using namespace std;
class input
{
protected:
    int numl;

public:
    void get_data()
    {
        cout << "Enter the number : " << endl;
        cin >> numl;
    }
    virtual int series() = 0;
};
class factorial : public input
{
public:
    int x;
    int facto = 1;
    int series()
    {
        for (int i = 1; i <= numl; i++)
        {
            facto *= i;
        }
        cout << "The factorial of the number : " << numl << " : " << facto << endl;
        return 0;
    }
};
class fibonacci : public input
{
public:
    int a = 0;
    int b = 1;
    int next = 0;
    int series()
    {
        cout << "Fibonnaci : " << endl;
        for (int i = 1; i <= numl; ++i)
        {
            if (i == 1)
            {
                cout << a << " , ";
                continue;
            }
            if (i == 2)
            {
                cout << b << " , ";
                continue;
            }
            next = a + b;
            a = b;
            b = next;
            cout << next << " , ";
        }
        return 0;
    }
};
int main()
{
    factorial example;
    example.get_data();
    example.series();
    fibonacci example2;
    example2.get_data();
    example2.series();
    return 0;
}