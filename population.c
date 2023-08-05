#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_population;
    do
    {
        start_population = get_int("Starting population: \n");
    }
    while (start_population < 9);
    // TODO: Prompt for end size
    int end_population;
    do
    {
        end_population = get_int("Ending population: \n");
    }
    while (start_population > end_population);
    // TODO: Calculate number of years until we reach threshold

    // n=n(n/3)-(n/4)
    int year = 0;
    while (start_population < end_population)
    {
        start_population = start_population + (start_population / 3) - (start_population / 4);
        year++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", year);
}
