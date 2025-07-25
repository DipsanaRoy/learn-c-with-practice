// C7.10. Create a 2D array via user input with a display function to print it's content on the screen.

#include <stdio.h>

// Function Prototype
void display(int row, int column, int arr[row][column]);

int main()
{
    // Initialize: no. of rows and columns
    int row, column;

    printf("\nEnter the number of matrix rows: ");
    scanf("%d", &row);

    printf("\nEnter the number of matrix columns: ");
    scanf("%d", &column);

    int arr[row][column]; // store 2D array

    // Input
    puts("\nStart to enter matrix elements one by one");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Row [%d] Column [%d] | element: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        putchar('\n');
    }

    puts("Generated 2D Array:");
    display(row, column, arr); // Function Call
    return 0;
}

// Function Description: prints 2d array
void display(int row, int column, int arr[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }
}