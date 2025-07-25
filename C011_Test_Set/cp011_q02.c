// CP11.2. Dynamically create an array capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

// Function Prototype
void clearBuffer();

int main()
{
    // Init: 6 size array
    int *arr = (int *) calloc(6, sizeof(*arr));
    
    // Check for memory allocation failure
    if (arr == NULL)
    {
        puts("\nMemory allocation failed!");
        return 1;
    }
    
    puts("\nStart entering 6 integers one by one");
    for (int i = 0; i < 6; i++)
    {
        printf("Enter int |%d|: ", i + 1);
        while (scanf("%d", &arr[i]) != 1) // Validate I/p
        {
            clearBuffer();
            printf("Enter a number: ");
        }
        clearBuffer();
    }
    
    puts("\nStored integers:");
    for (int i = 0; i < 6; i++)
    {
        printf("Int |%d|: %d\n", i + 1, arr[i]);
    }
    free(arr);
    return 0;
}

// Function Definition
void clearBuffer()
{
    for(int c; (c = getchar()) != '\n' && c != EOF;);
}