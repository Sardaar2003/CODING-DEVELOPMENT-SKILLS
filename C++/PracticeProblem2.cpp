#include <iostream>
#include <boost/math/common_factor.hpp>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

int1024_t factorial(int n)
{
    int1024_t res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int1024_t nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int M, W, X, Y;
        cin >> M >> W >> X >> Y;
        cout << nCr(M, X) * nCr(W, Y) << endl;
    }
    return 0;
}
