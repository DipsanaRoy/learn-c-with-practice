// PC1. Print random numbers between 1 - 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));                // Seed RNG [Random Number Generator] at start
    int randNo = rand() % 100 + 1; // Generate a random number between 1 to 100

    printf("\nGenerated random number: %d\n", randNo);
    return 0;
}