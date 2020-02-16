#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        // request height value //
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    for (int i = 0; i < h; i++)
    {
        for (int j = i; j < h - 1; j++)
        {
            // Print spaces before first pyramid //
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            // Print first pyramid //
            printf("#");
        }
        // Print gaps //
        printf("  ");
        for (int k = 0; k <= i; k++)
        {
            // Print second pyramid //
            printf("#");
        }
        printf("\n");
    }
}
