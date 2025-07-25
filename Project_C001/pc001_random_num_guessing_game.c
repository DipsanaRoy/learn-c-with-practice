// PC1. A number guessing game...
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function Prototypes
int replay();
void clearBuffer();

int main()
{
    srand(time(0));                // Seed RNG
    int guess, attempt = 0;        // stores user input & tracks attempts
    int randNo = rand() % 100 + 1; // generate a random no. at range [1, 100]

    // Replay on yes
    do
    {
        // Validate User I/p
        puts("\nGuess the number between 1 to 100");
        while (scanf("%d", &guess) != 1 || guess > 100 || guess < 1)
        {
            clearBuffer();
            puts("\nInvalid Entry! Please enter a number between 1 to 100!");
        }
        clearBuffer();
        attempt++; // Update attempts

        if (randNo < guess)
        {
            puts("Lower number please!");
        }
        else if (randNo > guess)
        {
            puts("Higher number please!");
        }
        else
        {
            (attempt > 1) ? printf("\nGreat job! You cracked it after %d attempts!\n", attempt) : puts("\nLegendary! First try success! (^0^)");
            if (replay()) // replay call
            {
                // Reset random no., user attempts and winning guess
                attempt = guess = 0;
                randNo = rand() % 100 + 1;
            }
        }
    } while (guess != randNo);
    puts("\nThanks for playing! See you next time!");
    return 0;
}

// Function Definitions:

// Clear input buffer
void clearBuffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

// Replay? Strict (Y/N) prompt
int replay()
{
    while (1)
    {
        printf("\nDo you want to play again? (y/n): ");
        char opt = tolower(getchar());

        if (getchar() == '\n')
        {
            if (opt == 'y')
                return 1;
            else if (opt == 'n')
                return 0;
        }
        clearBuffer();
    }
}