// C7.10. Create a 2D array via user input with a display function to print it's content on the screen.

#include <stdio.h>

// Function Prototype
void display(size_t row, size_t column, int arr[row][column]);

int main()
{
    // I/p: no. of rows and columns
    size_t row, column; // Why size_t? Read: C007_SIZE_NOTES.md

    printf("\nEnter the number of matrix rows: ");
    scanf("%zu", &row);

    printf("\nEnter the number of matrix columns: ");
    scanf("%zu", &column);

    int arr[row][column]; // store 2D array

    // I/p
    puts("\nStart to enter matrix elements one by one");
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            printf("Enter Row [%zu] Column [%zu] | element: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        putchar('\n');
    }

    puts("Generated 2D Array:");
    display(row, column, arr); // Function Call: O/p
    return 0;
}

// Function Description: prints 2d array
void display(size_t row, size_t column, int arr[row][column])
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            printf("%3d ", arr[i][j]); // 3 provides indentation, %d also works fine (in notes)
        }
        putchar('\n');
    }
}