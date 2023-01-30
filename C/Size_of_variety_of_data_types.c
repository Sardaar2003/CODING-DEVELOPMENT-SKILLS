#include <stdio.h>
int main()
{
    char charDataType;
    short shortType;
    int intType;
    long longType;
    float floatType;
    double DoubleType;
    printf("The size of char : %ld bytes\n", sizeof(charDataType));
    printf("The size of short : %ld bytes \n ", sizeof(shortType));
    printf("The size of int : %ld bytes\n", sizeof(intType));
    printf("The size of long : %ld bytes\n", sizeof(longType));
    printf("The size of float : %ld bytes\n", sizeof(floatType));
    printf("The size of double : %ld bytes\n", sizeof(DoubleType));
    return 0;
}