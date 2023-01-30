#include <iostream>
using namespace std;
template <class T>
void swapping(T number1, T number2)
{
    T temp = number1;
    number1 = number2;
    number2 = temp;
    cout << number1 << "\t" << number2 << endl;
}
int main()
{

    // cout << "Swapping the elements 12 and 23 : "<< swapping(12, 23) << endl;
    swapping(12, 23);
    swapping(7.2, 4.5);
    swapping("a", "b");
    return 0;
}