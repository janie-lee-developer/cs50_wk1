#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    //In case the division's result is a fraction, a number with a decimal point.
    //We want to use float.
    float z = x / y;

    printf("%f\n", z);
}

// 1/2, 3/2, 4/3 all gives me 1.000000
// Because x and Y are integer, C truncates everything after the decimal points. it doesn't fit the decimal points
// Does math correctly. Cannot fit floating values. Cannot fit decimal point.
// I loose all of the decimal numbers.
// I can only fit the integer part.