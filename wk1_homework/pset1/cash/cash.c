#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Prompt user for an amount of change
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);


    // Turn 23dollars into 230 cents, 5.23 to 523cents, 0.01 to 1cent.
    // round still keeps fraction with 6 decimal numbers, but rounds up or down to nearest integer.
    // 5.67456 * 100 = 567.456,  round(567.456) = 567cents, rounded down.
    int cents = round(dollars * 100);


    // Use the largest coins possible, keeping track of coins used.
    int count = 0;

    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            count++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            count++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            count++;
        }
        else
        {
            cents -= 1;
            count ++;
        }
    }

    // Print the number of coins.
    printf("%i\n", count);

}