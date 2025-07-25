// PC2. Recursion: continue-or-stop program
#include <stdio.h>
#include <ctype.h>
void continueOrStop()
{
    printf("Do you want to continue? (y/n): ");
    int opt = tolower(getchar());
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Clear input buffer

    return (opt == 'y') ? continueOrStop() : (opt == 'n') ? puts("Exiting.") : continueOrStop();
}

int main()
{
    puts("Welcome to the continue-or-stop program!");
    continueOrStop();
    return 0;
}