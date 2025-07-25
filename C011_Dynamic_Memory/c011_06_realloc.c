// C11.6. Use realloc to increase and decrease an array's length.

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    // Init: Dynamic array of size 5
    int *arr = (int *)malloc(5 * sizeof(int));
    
    puts("\nInitial values:");
    for (size_t i = 0; i < 5; i++)
    {
        arr[i] = (int)(i + 1) * 10;  // Sample data: 10, 20, 30, 40, 50
        printf("Element |%zu|: %d\n", i + 1, arr[i]);
    }
    
    // Reallocate memory to increase size to 10 & fill new values
    size_t newLen = 10;
    arr = realloc(arr, newLen * sizeof(int));
    for (size_t i = len; i < newLen; i++)
    {
        arr[i] = (int)(i + 1) * 10;  // Sample data continuation: 60, 70, ...
    }

    puts("\nAfter reallocating (size increase):");
    for (size_t i = 0; i < newLen; i++)
    {
        printf("Element |%2zu|: %d\n", i + 1, arr[i]);
    }
    
    // Reallocate memory to decrease size to 3
    newLen = 3;
    arr = realloc(arr, newLen * sizeof(int));
    
    puts("\nAfter reallocating (size decrease):");
    for (size_t i = 0; i < newLen; i++)
    {
        printf("Element |%zu|: %d\n", i + 1, arr[i]);
    }

    free(arr);
    return 0;
}