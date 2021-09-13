#include <cs50.h>
//Standard Input and Output
#include <stdio.h>

int main(void)
{
    //Get 2 Integer from the User and return the Sum
    //Get integer from the user
    //type of value, name of the variable
    long x = get_long("x :");

    long y = get_long("y: ");

    printf("%li\n", x+y);
}