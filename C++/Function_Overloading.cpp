#include <iostream>
using namespace std;

// ********* function overloading
int product(int x, int y) { return x * y; }
float product(float x, float y) { return x * y; }
double product(double x, double y) { return x * y; }

int main()
{
    cout << product(5, 5) << endl;
    cout << product(5.5, 1.2) << endl;
    cout << product(5.1223, 1234.35) << endl;
    return 0;
}