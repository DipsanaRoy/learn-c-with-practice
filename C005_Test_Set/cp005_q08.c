// CP5.8. Function to print the following pattern
// *
// * * *
// * * * * *

#include <stdio.h>

// Function Prototype
void pattern(int n);

int i; // Global variable declaration

int main()
{
    int n; // number of rows
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);

    if (n > 0)
    {
        puts("\nRequired Pattern");
        pattern(n); // Function Call
    }
    else puts("Please enter a positive non-zero integer value!");

    return 0;
}

// Function Description
void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }

    pattern(n - 1);

    for (i = 0; i < (2 * n - 1); i++) // Odd number formula
    {
        printf("* ");
    }
    putchar('\n'); // NOTE: prints one character only
}