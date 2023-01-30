#include <iostream>
#include <conio.h>
using namespace std;

class frclass
{
    int a, b;
    friend void print(frclass); // can be public, protected, private
};                              // declaration within class with Friend keyword

void print(frclass f) // definition outside class
{                     // obj as arguments (copies)
    f.a = 55;
    f.b = 115; // memebers are called using obj
    cout << "a=" << f.a << endl
         << f.b;
}

int main()
{
    frclass f;
    print(f); //  no object dot; called like normal function
    return 0;
}