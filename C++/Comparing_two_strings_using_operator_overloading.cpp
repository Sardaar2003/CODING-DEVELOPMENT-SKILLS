#include <iostream>
#include <string.h>
using namespace std;
class Checker
{
    char string[100];

public:
    void get_data()
    {
        fgets(string, 100, stdin);
    }
    int operator==(Checker c)
    {
        if (!strcmp(string, c.string))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Checker s1, s2;
    s1.get_data();
    s2.get_data();
    if (s1 == s2)
    {
        cout << "Both are equal " << endl;
    }
    else
    {
        cout << "Both are not equal " << endl;
    }
}