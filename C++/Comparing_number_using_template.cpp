#include <iostream>
using namespace std;
template <class T>
T compare(T num1, T num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    cout << "The greatest number among 12 and 29 : " << compare<int>(12, 29) << endl;
    cout << "The greatest number among 12.42 and 9.32 : " << compare<float>(12.42, 9.32) << endl;
    return 0;
}