// CP11.6. Store 5 elements in an array and now use realloc so that it can store 10 integers

#include <stdio.h>
#include <stdlib.h>

// Function Prototype
void memFail(int *arr);

int main()
{ 
    size_t len = 5; // Start with 5 elements
    
    int *arr = (int *)malloc(len * sizeof(*arr)); // Init: Dynamic Array
    memFail(arr);
    
    printf("\nEnter %zu element%s one by one\n", len, (len > 1 ? "s" : ""));
    for (size_t i = 0; i < len; i++)
    {
        printf("Enter element |%3zu|: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    puts("\nStored values:");
    for (size_t i = 0; i < len; i++)
    {
        printf("Element |%3zu|: %d\n", i + 1, arr[i]);
    }
    
    // Increase array to 10 elements
    size_t newLen = 10;
    arr = realloc(arr, newLen * sizeof(*arr)); // Reallocate memory for increase
    memFail(arr);
    
    printf("\nEnter %zu more element%s\n", newLen - len, (newLen - len > 1 ? "s one by one" : ""));
    for (size_t i = len; i < newLen; i++)
    {
        printf("Enter element |%3zu|: ", i + 1);
        scanf("%d", &arr[i]);
    }

    puts("\nStored values after increase:");
    for (size_t i = 0; i < newLen; i++)
    {
        printf("Element |%3zu|: %d\n", i + 1, arr[i]);
    }

    free(arr);
    return 0;
}

// Function Definitions:
void memFail(int *arr)
{
    if (arr == NULL)
    {
        puts("\nMemory allocation failed! Exiting program...");
        exit(1);
    }
}