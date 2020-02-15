#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    // Request height of pyramid //
    do
    {
        h = get_int("Height: ");
    }
    // Repeat until condtion is false //
    while (h < 1 || h > 8);
    // Print i+1 number of #s on iteration i //
    for (int i = 0; i < h; i++)
    {
        for (int j = i; j < h - 1 ; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
