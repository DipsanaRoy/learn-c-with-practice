/* PC2. Rock, paper, scissors is a game most of us have played during school time.
   This C program capable of playing this game with you. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// Function Prototypes
void clearBuffer(), gameResults(char comp, char you);
char safe_input();
int replay();

int main()
{
    srand(time(0)); // Seed RNG

    // Game ends when user enters 'n'
    do
    {
        char you = safe_input(); // stored user-input char in lowercase
        char moves[] = {'r', 'p', 's'};
        char comp = moves[rand() % 3]; // generated & stored random move for comp
        gameResults(comp, you);        // Game O/p
    } while (replay());

    puts("\nCome back anytime to relive the fun! :)");
    return 0;
}

// Function Definitions

void gameResults(char comp, char you)
{
    printf("\nYou chose '%c' and computer chose '%c'. ", you, comp);
    // Draw: rr, pp, ss
    if (comp == you)
    {
        puts("It's a draw!");
    }
    // Win: rp, ps, sr;
    else if ((comp == 'r' && you == 'p') || (comp == 'p' && you == 's') || (comp == 's' && you == 'r'))
    {
        puts("Congrats, you won!");
    }
    // Lose: pr, sp, rs;
    else
    {
        puts("Oops, computer won!");
    }
}

// Clear input buffer
void clearBuffer()
{
    for (int c; (c = getchar()) != '\n' && c != EOF;);
}

// Returns user-validated char input
char safe_input()
{
    while (1)
    {
        puts("\nEnter 'r' for rock, 'p' for paper and 's' for scissors");
        char c = tolower(getchar());
        if ((c == 'r' || c == 'p' || c == 's') && getchar() == '\n')
        {
            return c;
        }
        clearBuffer();
    }
}

// Replay? (Y/N) prompt
int replay()
{
    printf("\nDo you want to play again? (y/n): ");
    while (1)
    {
        char opt = tolower(getchar());
        clearBuffer();

        if (opt == 'n')
            return 0;
        else if (opt == 'y')
            return 1;

        printf("\nEnter 'y' for yes and 'n' for no: ");
    }
}