// CP11.4. Store 5 elements in an array then use realloc so that it can store 10 integers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // I/p: size 5 dynamic array by zeros
    size_t len = 5;
    int *arr = (int *)calloc(len, sizeof(*arr));

    puts("\nStored values:");
    for (size_t i = 0; i < len; i++)
    {
        printf("Element |%zu|: %d\n", i + 1, arr[i]);
    }

    len = 10;
    arr = realloc(arr, len * sizeof(*arr));
    arr[5] = 99;

    puts("\nModified Stored values (garbage values at the end from uninitialized realloc):");
    for (size_t i = 0; i < len; i++)
    {
        printf("Element |%2zu|: %d\n", i + 1, arr[i]);
    }
    free(arr);
    return 0;
}