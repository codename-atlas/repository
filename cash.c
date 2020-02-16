#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    do
    {
        // Prompt user for change //
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    dollars *= 100;
    int cents = roundf(dollars);
    // Calculate number of 25¢ //
    int change_1 = cents / 25;
    cents = cents % 25;
    // Calculate number of 10¢ //
    int change_2 = cents / 10;
    cents = (int) cents % 10;
    // Calculate number of 5¢ //
    int change_3 = cents / 5;
    cents = (int) cents % 5;
    // Calculate number of 1¢ //
    int change_4 = cents / 1;
    printf("%i\n", change_1 + change_2 + change_3 + change_4);
}

