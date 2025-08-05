// CP11.5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70).
// Use realloc to make it store 15 numbers (from 7 x 1 to 7 x 15).

#include <stdio.h>
#include <stdlib.h>

// Function Prototype
int memFail(int *arr);

int main()
{
    // Init: multipliers & tables
    int m = 10;
    int *t = (int *)malloc(m * sizeof(*t));
    memFail(t);

    puts("\nBefore Reallocating:");
    for (int i = 0; i < m; i++)
    {
        t[i] = 7 * (i + 1);
        printf("7 x %-2d = %d\n", i + 1, t[i]);
    }

    // Reallocate memory to store 15 multipliers
    m = 15;
    t = realloc(t, m * sizeof(*t));
    memFail(t);

    for (int i = 10; i < m; i++)
        t[i] = 7 * (i + 1);

    puts("\nAfter Reallocating:");
    for (int i = 0; i < m; i++)
        printf("7 x %-2d = %d\n", i + 1, t[i]);

    free(t);
    return 0;
}

// Function Definition
int memFail(int *arr)
{
    if (arr == NULL)
    {
        puts("\nMemory allocation failed! Exiting program...");
        exit(1);
    }
}