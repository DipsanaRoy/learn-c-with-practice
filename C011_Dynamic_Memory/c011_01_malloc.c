// C11.1. Use malloc function 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Init: Dynamic Arrays and their user-defined size
    int *ptr1, *ptr2;
    size_t size = 10;

    ptr1 = (int *)malloc(size * 4);           // Don't assume size of int is 4 bytes as it could be different in other architectures
    ptr2 = (int *)malloc(size * sizeof(int)); // Always use `sizeof()` function

    ptr1[0] = 5; // Set first value of ptr1

    // Set ptr2 values
    for (size_t i = 0; i < size; i++) ptr2[i] = i;

    // Uninitialized malloc has random garbage values
    puts("\nptr1 values:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%3d|: %d\n", i + 1, ptr1[i]);
    }

    puts("\nptr2 values:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%3d|: %d\n", i + 1, ptr2[i]);
    }
    
    free(ptr1);
    free(ptr2);
    return 0;
}