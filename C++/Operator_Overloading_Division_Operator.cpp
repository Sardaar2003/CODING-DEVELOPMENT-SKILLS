#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
private:
    float real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator/(Complex const &obj)
    {
        Complex result;
        result.real = ((((real) * (obj.real))) + ((imag) * (obj.imag))) / (pow(obj.real, 2) + pow(obj.imag, 2));
        result.imag = (((obj.real) * (imag)) - ((real) * (obj.imag))) / (pow(obj.real, 2) + pow(obj.imag, 2));
        return result;
    }
    void print()
    {
        cout << real << " + " << imag << " i \n";
    }
};
int main()
{
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 / c2;
    c3.print();
    return 0;
}
