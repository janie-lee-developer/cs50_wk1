#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");

    // .10 number of decimal numbers I want to see. In this case 10 after the decimal point.
    printf("%.50f\n", x/y);
}

// 32 or 64 bits meaning can create billions of numbers after the decimal point.
// We cannot infinitely calculate a value with computer. At some point it will max out its memory.
 