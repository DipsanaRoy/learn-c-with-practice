// CP7.7. A 3 x 10 array containing multiplication tables of 2, 7 and 9.

#include <stdio.h>

// Function Prototype
void printTable(int *mulTable);

int main()
{
    int mulTable[3][10]; // initialize arr

    /* Don't get confused: 2 * 1 = 2, 7 * 1 = 7 and so on. So for every nth table:
        base = 1st element = mulTable[n][0]. */
    mulTable[0][0] = 2;
    mulTable[1][0] = 7;
    mulTable[2][0] = 9;

    // Function Calls [Note: We are passing 1D array here]
    printTable(mulTable[0]);
    printTable(mulTable[1]);
    printTable(mulTable[2]);
    return 0;
}

// Function Definition
void printTable(int *mulTable)
{
    int base = mulTable[0];
    printf("\n*********************************"
           "\nTable of %d:\n", base);

    for (int j = 0; j < 10; j++)
    {
        mulTable[j] = base * (j + 1); // store tables

        printf("%d x %-2d = %d\n", base, j + 1, mulTable[j]); // O/p
    }
}