// PC1. Loops: continue-or-stop program
#include <stdio.h>

int main()
{
    char opt; // Option
    puts("Welcome to the continue-or-stop program!");
    while (1)
    {
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &opt); // Note the space before %c to consume any previous newline character
        for (int c; (c = getchar()) != '\n' && c != EOF; ); // Clear input buffer

        if(opt == 'n' || opt == 'N')
        {
            puts("Exiting.");
            return 0;
        }
        if (opt != 'y' && opt != 'Y')
            puts("Invalid input! Please enter 'y' or 'n'.");
    }
}