#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for name //
    string n = get_string("What is your name?\n");
    // Displays "Hello, name"
    printf("Hello, %s\n", n);
}
