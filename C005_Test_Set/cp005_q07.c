// CP5.7. Function to print the following pattern [Recursion]
// *
// * * *
// * * * * *

#include <stdio.h>

// Function Prototype
void pattern (int n, int column, int row);

int tag = 1; // Global variable declaration

int main()
{
    int n; // number of rows
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);

    if (n > 0)
    {
        puts("\nRequired Pattern");
        pattern (n, 1, 1); // Function Call
    }
    else puts("Please enter a positive non-zero integer value!");

    return 0;
}

// Function Definition

// Don't do this use loops instead
void pattern(int n, int column, int row)
{
    if (tag > n) return;
    
    if (column <= row)
    {
        printf("* ");
        pattern(n, column + 1, row);
    }
    else
    {
        putchar('\n'); // lightweight on compiler + enhance readability
        tag++;
        pattern(n, 1, row + 2);
    }
}