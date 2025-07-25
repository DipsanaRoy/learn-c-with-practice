// CP7.8. Q7 with custom input by the user

#include <stdio.h>

// Function Prototype
void printTable(int *table, size_t count);

int main()
{
    // Init: rows as tables' base count and arr
    size_t rows;
    printf("\nHow many tables you want to print?: ");
    scanf("%zu", &rows);
    int table[rows][10];                                    // -> cols size = 10

    // User I/p
    puts("\nEnter the numbers whose table you want to print");
    for (size_t i = 0; i < rows; i++)
    {
        printf("Enter number |%d|: ", i + 1);
        scanf("%d", &table[i][0]);
    }

  /*size_t*/rows = sizeof(table) / sizeof(table[0]);      // table[rows] size
    size_t cols = sizeof(table[0]) / sizeof(table[0][0]); // table[...][cols] -> cols size (10 here)

    // Function Calls
    for (size_t i = 0; i < rows; i++)
    {
        printTable(table[i], cols);
    }
    return 0;
}

// Function Definition
void printTable(int *table, size_t count)
{
    size_t base = table[0];
    printf("\n*********************************"
           "\nTable of %d:\n", base);
    
    for (size_t j = 0; j < count; j++)
    {
        table[j] = base * (j + 1); // store tables

        printf("%d x %d = %d\n", base, j + 1, table[j]); // O/p
    }
}