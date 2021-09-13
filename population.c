#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_pop;
    do
    {
        start_pop = get_int("Start size: ");
    }
    while (start_pop < 9);

    // TODO: Prompt for end size
    int end_pop;
    do
    {
        end_pop = get_int("End size: ");
    }
    while (end_pop < start_pop);


    // TODO: Calculate number of years until we reach threshold
    // int diff = end_pop - start_pop;
    // int year = diff*0.125;
    int year = 0;

    while (start_pop < end_pop)
    {
        int new_borns = start_pop / 3;
        int deads = start_pop / 4;
        start_pop = start_pop + new_borns - deads;
        year += 1;
    }


    // TODO: Print number of years
    printf("Years: %i\n", year);
}