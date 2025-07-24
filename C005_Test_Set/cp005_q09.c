// CP5.9. Function to print the following pattern
// *
// * * *
// * * * * *

#include <stdio.h>

int main()
{
    int n; // number of rows
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);

    if (n > 0)
    {
        puts("\nRequired Pattern");

        for (int i = 1; i <= n; i++) // Row
        {
            // Odd number formula
            for (int j = 1; j <= (2 * i - 1); j++) // Column
            {
                printf("* ");
            }
            putchar('\n');
        }
    }
    else puts("Please enter a positive non-zero integer value!");

    return 0;
}