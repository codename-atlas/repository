#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float cash;
    do
    {
        // Prompt user for change //
        cash = get_float("Change owed: ");
    }
    while (cash < 0);
    cash *= 100;
    cash = roundf(cash);
    // Calculate number of 25¢ //
    int change_1 = cash / 25;
    cash = (int) cash % 25;
    // Calculate number of 10¢ //
    int change_2 = cash / 10;
    cash = (int) cash % 10;
    // Calculate number of 5¢ //
    int change_3 = cash / 5;
    cash = (int) cash % 5;
    // Calculate number of 1¢ //
    int change_4 = cash / 1;
    printf("%i\n", change_1 + change_2 + change_3 + change_4);
}

