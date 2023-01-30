#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    Complex(int real1 = 0, int imaginary1 = 0)
    {
        real = real1;
        imaginary = imaginary1;
    }
    Complex operator+(Complex const &c1)
    {
        Complex result;
        result.real = real + c1.real;
        result.imaginary = imaginary + c1.imaginary;
        return result;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c1(10, 5), c2(13, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}